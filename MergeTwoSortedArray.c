// Merge two sorted arrays

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    while(m > 0 && n > 0) {
        if(nums1[m-1] > nums2[n-1]) {
            nums1[nums1Size-1] = nums1[m-1];
            m--;
            nums1Size--;
        } else {
            nums1[nums1Size-1] = nums2[n-1];
            n--;
            nums1Size--;
        }
    }
    while(n > 0) {
        nums1[nums1Size-1] = nums2[n-1];
        n--;
        nums1Size--;
    }
}
