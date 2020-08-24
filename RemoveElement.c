// Program to remove all instances of a value in an array of integers and return the new length (in-place)

int removeElement(int* nums, int numsSize, int val){
    int new_length = 0; // New length to be returned
    int i;              // Iterator
    
    for(i = 0; i < numsSize; i++) {
        // If the current index has a value not equal to val, leave it untouched
        // If it is equal to the val, do nothing and don't store it
        // It doesn't matter what you leave beyond the new length (Given in the problem description, so we don't have to
        // sort and shift the numbers and maintain any order)
        if(nums[i] != val) {
            nums[new_length] = nums[i];
            new_length++;
        }
    }
    
    return new_length;
}
