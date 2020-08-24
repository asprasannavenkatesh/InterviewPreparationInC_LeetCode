// HackerRank Grading students

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;

    int *result_grades = malloc(grades_count * sizeof(int));
    int i, diff = 0;

    for(i = 0; i < grades_count; i++) {
        if(grades[i] < 38) {
            result_grades[i] = grades[i];
        } else {
            diff = grades[i] % 5;
            if (diff >= 3) {
                result_grades[i] = (diff == 3)?(grades[i] + 2):(grades[i] + 1);
            } else {
                result_grades[i] = grades[i];
            }
        }
    }

    return result_grades;
}
