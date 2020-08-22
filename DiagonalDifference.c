// Given a square matrix, calculate the absolute difference between the sums of its diagonals.

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int left_to_right_diagonal_sum = 0;
    int right_to_left_diagonal_sum = 0;
    int i = 0,j = 0;
    int result;

    // For a 3x3 matrix
    // left_to_right_diagonal_sum is computed as sum of elements when i = j
    // as in arr[0][0] + arr[1][1] + arr[2][2]

    // right_to_left_diagonal_sum is the sum computed as the following
    // arr[0][2] + arr[1][1] + arr[2][0] where it is effectively
    // arr[0][arr_columns-1] + arr[arr_rows-1][arr_columns-1] + arr[arr_rows-1][0]

    // Expanding this idea for an nxn matrix
    for(i = 0; i < arr_rows; i++) {
        for(j = 0; j < arr_columns; j++){
            if(i==j) {
                left_to_right_diagonal_sum += arr[i][j];
            }
            
            // for computing the right_to_left_diagonal_sum, add those elements
            // that satisfy this condition, eg arr[0][2] + arr[1][1] +arr[2][0]
            // where 0+2, 1+1, 2+0 all add upto number of rows/columns -1
            if((i+j) == arr_rows-1) {
                right_to_left_diagonal_sum += arr[i][j];
            }
        }
    }
    
    result = abs(left_to_right_diagonal_sum - right_to_left_diagonal_sum);

    return result;
}
