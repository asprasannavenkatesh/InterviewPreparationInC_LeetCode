int pickingNumbers(int a_count, int* a) {
    int i;
    int count_array[100] = {0}; // value of n is between 2 & 100, init to max 100 size

    // Populate the count array with frequencies of each element
    // a[i] lies between 1 and 99 (inclusive)
    for(i = 0; i < a_count; i++) {
        count_array[a[i]]++;
    }

    // Now calculate the maximum subarray length by adding counts of adjacent
    // frequencies in the count array
    int max_subarray_length = 0;

    for(i = 0; i < 99; i++) {
        if((count_array[i] + count_array[i+1]) > max_subarray_length) {
            max_subarray_length = count_array[i] + count_array[i+1];
        }
    }

    return max_subarray_length;
}
