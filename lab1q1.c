#include <stdio.h>

//Function to read an array
void readArray(int *arr, int n) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

//Function to display an array
void displayArray(int *arr, int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//Function to display the elements in the odd positions
void displayOddPositionElements(int *arr, int n) {
    printf("Odd positioned elements: ");
    for (int i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


//Function to display the even numbers in the matrix
void displayEvenNumbers(int *arr, int n) {
    printf("Even numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

//Function to find the maximum number out of the array
int findMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

//Function to calculate the average of all the elements present in the array
double calculateAverage(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    readArray(arr, n);
    displayArray(arr, n);
    displayOddPositionElements(arr, n);
    displayEvenNumbers(arr, n);

    int max = findMax(arr, n);
    printf("Maximum number: %d\n", max);

    double average = calculateAverage(arr, n);
    printf("Sum: %d\n", average);

    return 0;
}
