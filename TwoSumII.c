// Two Sum II - Input array is sorted

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int *result = (int *)calloc(2, sizeof(int));
    int index1 = 0, index2 = numbersSize - 1;

    // index1 must be less than index2 as given in the problem description
    while(index1 < index2) {
        int temp_sum = numbers[index1] + numbers[index2];
        if(temp_sum > target) {
            // Use the next lower index2 to compute temp_sum
            index2--;
        } else if (temp_sum < target) {
            // Use the next higher index1 to compute temp_sum
            index1++;
        } else {
            // Non zero based indices
            result[0] = index1 + 1;
            result[1] = index2 + 1;
            break;
        }
    }

    return result;
}
