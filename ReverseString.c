// Reverse a string (array of characters)

void swap(char *c1, char *c2) {
    char ch;
    ch = *c1;
    *c1 = *c2;
    *c2 = ch;
}

void reverseString(char* s, int sSize){
    int i;
    
    for(i = 0; i < (sSize/2); i++) {
        swap(&s[i], &s[sSize-1-i]);
    }
}
