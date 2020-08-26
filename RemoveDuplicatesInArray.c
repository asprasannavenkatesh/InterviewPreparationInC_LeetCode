// Remove Duplicates from Sorted Array in-place

int removeDuplicates(int* nums, int numsSize){
    // if numsSize is 0 or 1, just return 1
    if((numsSize == 0) || (numsSize == 1)) {
        return numsSize;
    }
    
    int new_length = 0;
    int i;
    
    for(i = 0; i < numsSize - 1; i++) {
        // When the adjecent numbers are not equal, modify the length
        if(nums[i] != nums[i+1]) {
            nums[new_length++] = nums[i];
        }
    }
    
    nums[new_length++] = nums[numsSize-1];
    
    return new_length;
}
