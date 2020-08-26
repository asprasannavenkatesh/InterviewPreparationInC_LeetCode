// Complete the countingValleys function below.
int countingValleys(int n, char* s) {
    int i = 0;
    int num_valleys = 0;
    // Base case if he has only 2 steps and it is D and U, it is a valley
    if(n == 2) {
        if((s[i] == 'D') && (s[i+1] == 'U')) {
            return 1;
        }
    }

    int count = 0;
    bool downhill_first = false;
    while(s[i] != '\0') {
        if(s[i] == 'U') {
            count++;
        } else if(s[i] == 'D') {
            count--;
        }
        if(count < 0) {
            downhill_first = true;
        }
        if(downhill_first && (count == 0)) {
            downhill_first = false;
            num_valleys++;
        }
        i++;
    }

    return num_valleys;
}
