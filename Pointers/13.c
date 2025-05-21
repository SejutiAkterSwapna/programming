#include <stdio.h>

int find_max(int *arr, int size) {
    int *ptr = arr;
    int max = *ptr; // Assume first element is max

    for(int i = 1; i < size; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    return max;
}

int main() {
    int numbers[] = {12, 45, 23, 89, 34, 67};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int max_value = find_max(numbers, size);
    printf("Maximum number is: %d\n", max_value);

    return 0;
}