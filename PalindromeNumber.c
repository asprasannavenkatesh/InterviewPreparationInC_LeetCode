// Program to find if the number is a Palindrome or not

bool isPalindrome(int x){
    // If the number is negative, then it will never be a palindrome as it will always end with a -
    if (x < 0) {
        return false;
    }
    
    // Else find the reverse of the number and then compare it with x
    long reverse_number = 0;
    int copy_x = x;
    
    while (copy_x > 0) {
        // Form the reverse number by getting the digits and adjusting the place value every time
        reverse_number = (reverse_number * 10) + (copy_x % 10);
        // Move on to the next digit
        copy_x /= 10;
    }

    return reverse_number == (long)x;
}
