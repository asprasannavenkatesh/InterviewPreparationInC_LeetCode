// Number of Segments in a String

int countSegments(char * s){
    int i = 0, number_of_segments = 0;
    
    while(s[i] != '\0') {
        // To account for trailing spaces/multiple spaces between words we can also check s[i]
        if((s[i] != ' ') && ((s[i+1] == ' ')||(s[i+1] == '\0'))) {
            number_of_segments++;
        }
        i++;
    }
    
    return number_of_segments;
}
