Propose refactoring and optimizations for the following code:
```
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

// Function declaration
void calculateAndSort(int *arr, int size, float *mean, float *median, int *mode);

// Main function
int main() {
    int data[ARRAY_SIZE] = {7, 8, 9, 5, 6, 7, 8, 2, 3, 4};
    float mean = 0.0f, median = 0.0f;
    int mode = 0;

    calculateAndSort(data, ARRAY_SIZE, &mean, &median, &mode);

    printf("After processing:\n");
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Mode: %d\n", mode);
    printf("Sorted Array: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}

// Complex function that calculates mean, median, mode and sorts the array
void calculateAndSort(int *arr, int size, float *mean, float *median, int *mode) {
    int sum = 0, maxCount = 0;
    *mode = arr[0];

    // Calculating mean
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    *mean = (float)sum / size;

    // Sorting array for median calculation
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Calculating median
    if (size % 2 == 0) {
        *median = (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        *median = arr[size / 2];
    }

    // Calculating mode
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            *mode = arr[i];
        }
    }
}

```