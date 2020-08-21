// Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

bool isPowerOfFour(int num){
    if(num < 1)
        return false;
    
    // Considering the powers of 4, we have
    // 4 ^ 0 is 1  (     0001)
    // 4 ^ 1 is 4  (     0100)
    // 4 ^ 2 is 16 (0001 0000)
    // 4 ^ 3 is 64 (0100 0000)
    // Hence we can arrive at the mask for the 32 bit integer as follows
    int power_of_four_mask = 0x55555555;
    
    // Then return true if it is a power of 4
    return (((num & power_of_four_mask) == num) && ((num & (num - 1)) == 0));
}
