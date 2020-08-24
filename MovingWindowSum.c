// Complete the birthday function below.
int birthday(int s_count, int* s, int d, int m) {
    int number_of_chocolate_squares = 0;
    int i = 0, j = 0;

    for(i = 0; i < s_count; i++) {
        int sum = 0;
        for(j = i; j < (i + m); j++) {
            sum += s[j];
        }

        if(sum == d) {
            number_of_chocolate_squares++;
        }
    }

    return number_of_chocolate_squares;
}
