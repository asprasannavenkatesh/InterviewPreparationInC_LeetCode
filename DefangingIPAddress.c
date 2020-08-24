// Defanging an IP Address

char * defangIPaddr(char * address){
    int length = strlen(address);

    // To accommodate 3 times [.], we need 6 additional spaces for [ and ] and one for null terminator
    char *result = (char *)calloc((length + 7), sizeof(char));
    
    int i = 0, j = 0;
    while(i < length) {
        result[j] = address[i];
        
        if(address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j] = ']';
        }   
        i++; j++;
    }
    result[j] = '\0';
    
    return result;
}
