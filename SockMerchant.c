// Complete the sockMerchant function below.
int sockMerchant(int n, int ar_count, int* ar) {
    int num_pairs = 0;
    int i, j;
    int *frequency_array = (int *)calloc(100, sizeof(int));

    for(i = 0; i < ar_count; i++) {
        frequency_array[ar[i] - 1]++;
    }

    for(i = 0; i < 100; i++) {
        num_pairs += ((frequency_array[i]) / 2);
    }

    return num_pairs;
}
