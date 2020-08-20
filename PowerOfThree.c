// Program to determine if an integer is a power of three

bool isPowerOfThree(int n){
    long number = 1;
    
    while(number < n) {
        number *= 3;     // Keep multiplying by 3
    }
    
    if(number == (long)n)
        return true;
    
    return false;
}

// Without using any loops, using just math concepts on limits
// Program to determine if an integer is a power of three
// 1162261467 is the max power of 3 that can be stored in INTEGER limits

bool isPowerOfThree(int n){
    return n > 0 && 1162261467 % n == 0;
}
