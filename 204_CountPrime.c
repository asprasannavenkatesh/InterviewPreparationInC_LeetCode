// Program to count number of prime numbers less than a non-negative number, n.

int countPrimes(int n){
    // Base cases: If n is 0, 1 or 2, return 0, we don't have to execute any code as there
    // are NO prime numbers less than 2.
    if((n == 0) || (n == 1) || (n == 2)) {
        return 0;
    }
    
    // Create and initialize a boolean array of size n+1 and begin with saying
    // all numbers less than n are prime and set them all to true
    bool prime_array[n+1];
    memset(prime_array, true, sizeof(prime_array));
    
    // Start refining this prime_array now. 0 is not prime. 1 is neither prime nor composite
    // Start this loop with 2
    int i, j;
    
    // Run this loop to eliminate all the multiples of prime numbers
    // To make it more efficient, this loop can be run till i <= sqrt(n) as the other numbers
    // would be false already when it reaches that point
    for(i=2; i*i <= n; i++) {
        if(prime_array[i] == true) {
            // Set all the multiples of this prime number as false, as they all have this
            // prime number as one of their factors
            for(j=(i*i); j <= n; j=j+i) {
                prime_array[j] = false;
            }
        }
    }
    
    // At the end of this, only prime numbers will have prime_array[i] set to true.
    // Hence count those to get the result, Initializing count to 0
    int count = 0;
    // Start counting from prime number 2 and above as 0 is not prime.
    // 1 is neither prime nor composite
    for(i=2; i<n; i++) {
        if(prime_array[i] == true) {
            count++;
        }
    }
    
    // Return the number of prime numbers less than n
    return count;
}
