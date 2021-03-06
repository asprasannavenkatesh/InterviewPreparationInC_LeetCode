// Given an array of integers, find if the array contains any duplicates.
// Your function should return true if any value appears at least twice in the array,
// and it should return false if every element is distinct.

// Compare function of qsort for sorting the integers
int compare(const void *a, const void *b) {
    // Typecast (const void *) to (int *) and retrieve the content using * operator
    return ((*(int *)a)-(*(int *)b));
}

bool containsDuplicate(int* nums, int numsSize){
    // Sort all the elements of the array using qsort
    qsort(nums, numsSize, sizeof(int), compare);
    
    // Search for Duplicates, if adjacent values are equal, return true. Else return false
    int i;
    for(i = 0; i < numsSize-1; i++) {
        if(nums[i] == nums[i+1])
            return true;
    }
    return false;
}
