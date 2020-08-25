// Complete the migratoryBirds function below.
int migratoryBirds(int arr_count, int* arr) {
    int *frequencyMigratoryBirds = (int *)calloc(arr_count, sizeof(int));
    int i;
    int index = 0, max_frequency = 0;

    // Get the frequency array
    for(i = 0; i < arr_count; i++) {
        frequencyMigratoryBirds[arr[i] - 1]++;
    }

    max_frequency = frequencyMigratoryBirds[0];
    for(i = 0; i < 5; i++) {
        if(frequencyMigratoryBirds[i] > max_frequency) {
            max_frequency = frequencyMigratoryBirds[i];
            index = i;
        }
    }  

    return (index + 1);
}
