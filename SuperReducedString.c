char* superReducedString(char* s) {
    int length = strlen(s);
    char* stack = (char *)malloc(length * sizeof(char));
    int i, top = -1;

    for(i = 0; i < length; i++) {
        if(i == 0) {
            stack[++top] = s[i];
        } else {
            if(stack[top] == s[i]) {
                top--;
            } else {
                stack[++top] = s[i];
            }
        }
    }

    char* result_array = (char *)malloc(length * sizeof(char));

    if(top == -1) {
        return "Empty String";
    } else {
        for(i = 0; i <= top; i++) {
            result_array[i] = stack[i];
        }
        result_array[top + 1] = '\0';
        return result_array;
    }
}
