char* timeConversion(char* s) {
    /*
     * Write your code here.
     */
     int length = strlen(s) - 1;
     char* result = (char *)malloc(sizeof(char)*length);

     char ch; // To determine if it is AM or PM
     ch = s[length - 1];

     int j, hour = 0;
     int h1 = (int)s[0] - '0';
     int h2 = (int)s[1] - '0';
     hour = (h1 * 10) + (h2 % 10); // Get hour as an integer

     switch(ch) {
         case 'A' : {
             if(hour == 12) {
                result[0] = '0';
                result[1] = '0';
                for(j = 2;j < length - 1; j++) {
                    result[j] = s[j];
                }
                result[j] = '\0';
             } else {
                result = s;
                result[length - 1] = '\0';
             }
         } break;
         case 'P' : {
             if(hour != 12) {
                hour += 12; // make changes for PM by adding 12
             }

            result[0] = (char)(hour / 10) + '0';
            result[1] = (char)(hour % 10) + '0';
             
            for(j = 2;j < length - 1; j++) {
                result[j] = s[j];
            }
            result[j] = '\0';
         } break;
         default: {
             return "00:00:00";
         }
     }

    return result;
}
