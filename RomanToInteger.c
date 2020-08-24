// Program to convert Roman to Integer

// Function that does Symbol to Value conversion
int SymbolToValue(char s) {
    switch(s) {
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
        default  : return 0;
    }
}

int CorrectionRequired(char s, char prev) {
    switch(prev) {
        case 'I' : if((s == 'V') || (s == 'X')) return -2;    // difference between IV and VI is 2,   and IX and XI is 2
        case 'X' : if((s == 'L') || (s == 'C')) return -20;   // difference between XL and LX is 20,  and XC and CX is 20
        case 'C' : if((s == 'D') || (s == 'M')) return -200;  // difference between CD and DC is 200, and CM and MC is 200
        default  : return 0;                                  // No correction needed
    }
}

int romanToInt(char * s){
    // Initialize this previous character to anything other than 'I', 'X' or 'C'. I am just choosing 'M'
    // previous 'I', 'X', 'C' charaters needs a correction to be done to the integer values
    char previous = 'M';
    int IntegerValue = 0; // To calculate the integer sum value
    int i = 0;
    int length = strlen(s) - 1;
    
    while(i <= length) {
        IntegerValue += (SymbolToValue(s[i]) + CorrectionRequired(s[i], previous));
        previous = s[i]; // Set this for next iteration
        i++;             // Move on to next roman numeral place
    }

    return IntegerValue;
}
