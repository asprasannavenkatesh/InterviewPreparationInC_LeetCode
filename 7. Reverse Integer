// Reverse an integer and also check for overflows

int reverse(int x){
    // To handle overflows follow this approach
    bool negative_number = false;

    // Check for bounds and return 0 if overflowing
    if(x <= INT_MIN || (x >= INT_MAX - 1)) {
        return 0;
    }
    
    // If the number is negative, negate it and use for further calculations
    if (x < 0) {
        negative_number = true;
        x = -x;
    }
    
    // Reverse the number and check for overflow
    long long reverse_number = 0; // Define this as long long to get around run time error
    
    while (x != 0) {
        int digit = x % 10;                                 // Get the digit
        reverse_number = ((reverse_number*10) + digit);     // Calculate reverse_number
        x = x / 10;                                         // Move on to the next digit 
    }
    
    // We are dealing only in positive numbers till here.
    // Check if reverse_number is greater than INT_MAX then return 0
    // This is to overcome a run time error seen here in this platform
    if(reverse_number > INT_MAX) {
        return 0;
    }
    
    if(negative_number) {
        return -reverse_number;
    }
    
    return reverse_number;
}
