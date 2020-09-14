// Majority Element in a non-empty array

int majorityElement(int* nums, int numsSize){
    int majority_element = nums[0];
    int i, count = 0;
    
    for(i = 0; i < numsSize; i++) {
        if(count == 0) {
            majority_element = nums[i];
        }
        count += (nums[i] == majority_element) ? 1 : -1;
    }

    return majority_element;
}

// Solution with qsort, but takes longer execution time
/*
int compare_function(const void *a, const void *b) {
    return ((*(int *)a) - (*(int *)b));
}

int majorityElement(int* nums, int numsSize){
    int majority_element = nums[0];
    
    // Sort the elements in the array
    qsort(nums, numsSize, sizeof(int), compare_function);
    
    // Return the element that is present at position [n/2] after sorting
    return nums[numsSize/2];
}
*/
