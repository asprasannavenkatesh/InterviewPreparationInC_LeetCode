// Climbing stairs: Distinct ways can you climb to the top

int climbStairs(int n){
    // Base cases n = 0, 1 or 2, return n
    if((n == 0) || (n == 1) || (n == 2))
        return n;
    
    int *result = (int *)calloc(n, sizeof(int));
    int i = 0;
    
    result[i++] = 1; // For the stair 1, it can be climbed in only one way
    result[i++] = 2; // For the stair 2, it can be climed 1-1 or 2, so 2 ways
    
    // Calculate for the n steps by calculating till n-1 steps and n-2 steps
    for(i = 2; i < n; i++) {
        result[i] = result[i-1] + result[i-2];
    }
    
    return result[n - 1];
}
