// Contains Duplicate and absolute difference between indices i and j is at most k
struct helper {
    int index;
    long int value;
};

// qsort compare function
int compare_function(const void *a, const void *b) {
    return (((struct helper *)a)->value - ((struct helper *)b)->value); 
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    // If numsSize is 0 or 1, return false
    if(numsSize <= 1) {
        return false;
    }

    int i;

    // Copy the helper struct with values and indices
    struct helper arr[numsSize];
    for(i = 0; i < numsSize; i++) {
        arr[i].index = i;
        arr[i].value = nums[i];
    }

    // qsort this helper struct
    qsort(arr, numsSize, sizeof(struct helper), compare_function);

    // Now walk through the helper array and check for the conditions for k
    for(i = 0; i < numsSize - 1; i++) {
        if((arr[i].value == arr[i+1].value) && (abs(arr[i].index - arr[i+1].index) <= k)) {
            return true;
        }
    }
    return false;
}
