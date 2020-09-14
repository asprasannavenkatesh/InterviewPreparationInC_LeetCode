// Excel Sheet Column Number

int titleToNumber(char * s){
    int column_number = 0;

    while(*s) {
        int value = 0;
        value = (*s++) - 'A' + 1;
        column_number = 26 * column_number + value;
    }
    
    return column_number;
}
