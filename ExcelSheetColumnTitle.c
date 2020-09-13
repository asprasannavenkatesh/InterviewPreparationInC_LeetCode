// Excel Sheet Column Title

char * convertToTitle(int n){
    int size = 10;
    char *temp_result = (char *)calloc(size, sizeof(char));
    char *result = (char *)calloc(size, sizeof(char));
    int i = 0, j = 0;
    
    while(n) {
        int for_current_char_conversion = n % 26;

        if(for_current_char_conversion == 0) {
            n -= 1;
            for_current_char_conversion = 26;
        }

        temp_result[i++] = (char)(for_current_char_conversion + 'A' - 1);
        j++;
        n /= 26;
    }

    // Reverse and return the string
    for(i = 0; i < j; i++)
    {
        result[i] = temp_result[j-i-1];
    }
    result[i]='\0';
    
    
    return result;
}
