// Given an integer, write a function to determine if it is a power of two.

// Function to return if a number is a Power of Two

bool isPowerOfTwo(int n){
    // Easiest way is to do n & n-1 and return the negation of that result
    // E.g if n is 8 (a power of 2), then n-1 is 7
    // We have (8 & 7) = (0x1000 & 0x0111) = 0 and hence we can return !0
    if(n <= 0)
        return false;
    return !(n & (n-1));

}
