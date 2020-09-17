int minimumNumber(int n, char* password) {
    // Return the minimum number of characters to make the password strong
    int num_numbers = 0;
    int num_lower_case = 0;
    int num_upper_case = 0;
    int num_special_characters = 0;

    while(*password) {
        if(*password >= 97 && *password <= 122) {
            num_lower_case++;
        } else if(*password >= 65 && *password <= 90) {
            num_upper_case++;
        } else if(*password >= '0' && *password <= '9') {
            num_numbers++;
        } else if(isSpecialChar(*password)) {
            num_special_characters++;
        }
        password++;
    }

    int count = 0;
    if(num_numbers < 1) {
        count++;
    }
    if(num_lower_case < 1) {
        count++;
    }
    if(num_upper_case < 1) {
        count++;
    }
    if(num_special_characters < 1) {
        count++;
    }

    return fmax(count,6-n);
}
