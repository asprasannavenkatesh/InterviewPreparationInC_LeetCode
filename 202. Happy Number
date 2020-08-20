/* 202. Happy Number
Write an algorithm to determine if a number n is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits,
and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.
*/

// Function to find sum of squares of digits of a number
int SumOfSquaresOfDigits(int num) {
    int digit, sum = 0;

    while(num > 0) {
        digit = num%10;              // Get the last digit
        sum = sum + (digit * digit); // Find square of that digit and add it to sum
        num = num/10;                // Divide by 10 and move to the next digit
    }
    return sum;
}

bool isHappy(int n){
    // Do this when the number is greater than 1
    // Numbers 2, 3, 4, 5, 6 are not happy numbers, hence it will exceed time to compute and
    // get stuck there indefinitely resulting in timeout.
    // Hence to optimize this, do it for n >= 7
    while(n >= 7){
        n = SumOfSquaresOfDigits(n);
    }
    // If at the end of this, n is not 1(does not stay at 1), it is not a "happy" number
    // Return true otherwise
    if(n!=1)
        return false;
    return true;
}
