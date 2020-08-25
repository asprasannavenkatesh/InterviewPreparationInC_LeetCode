bool isLeapYear(int year) {
    // For Julian calendar, just check divisibility by 4
    if(year < 1918) {
        if(year % 4 == 0) {
            return true;
        } else {
            return false;
        }
    }

    // Is leap year if it is divisible by 400
    if(year % 400 == 0) {
        return true;
    }

    // If it is divisible by 4 and not by 100, it is a leap year
    if(year % 100 == 0) {
        return false;
    }

    if(year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

void day_and_month_convert_to_string(char *result, int day, int year) {
    result[0] = (day/10) + '0';
    result[1] = (day%10) + '0';
    result[2] = '.';
    result[3] = '0';
    result[4] = '9';
    result[5] = '.';
    result[6] = (year / 1000) + '0';
    year %= 1000;
    result[7] = (year / 100) + '0';
    year %= 100;
    result[8] = (year / 10) + '0';
    year %= 10;
    result[9] = (year % 1000) + '0';

}

char* dayOfProgrammer(int year) {
    char *result = (char *)calloc(11, sizeof(char)); // for dd.mm.yyyy format
    bool LeapYear = isLeapYear(year);
    int day, nth_day = 256;

    if(LeapYear) {
        day = nth_day - 244;
    } else {
        if (year == 1918) {
            day = nth_day - 230;
        } else {
            day = nth_day - 243;
        }
    }

    day_and_month_convert_to_string(result, day, year);
    result[10] = '\0';

    return result;
}
