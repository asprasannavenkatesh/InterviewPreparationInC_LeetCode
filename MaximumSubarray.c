// Maximum Subarray and return its sum

int maxSubArray(int* nums, int numsSize){
    int sum = 0, max_sum = nums[0];
    int i;
    
    for(i = 0; i < numsSize; i++) {
        sum += nums[i];
        max_sum = (max_sum > sum)? max_sum : sum;
        if(sum < 0) {
            sum = 0;
        }
    }
    
    return max_sum;
}
