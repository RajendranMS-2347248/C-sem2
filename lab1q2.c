#include <stdio.h>

//2-D integer array
// Function to read an n*n matrix
void readMatrix(int n, int matrix[][n]) {
    printf("Enter the elements of the %d*%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display an n*n matrix
void displayMatrix(int n, int matrix[][n]) {
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate row totals
void calculateRowTotal(int n, int matrix[][n], int rowTotal[]) {
    for (int i = 0; i < n; i++) {
        rowTotal[i] = 0;
        for (int j = 0; j < n; j++) {
            rowTotal[i] += matrix[i][j];
        }
    }
}

// Function to check if the matrix is an identity matrix
int isIdentityMatrix(int n, int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return 0; // Not an identity matrix
            }
        }
    }
    return 1; // It's an identity matrix
}

int main() {
    int n;
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int rowTotal[n];

    readMatrix(n, matrix);
    displayMatrix(n, matrix);

    calculateRowTotal(n, matrix, rowTotal);

    for (int i = 0; i < n; i++) {
        printf("Row %d total: %d\n", i + 1, rowTotal[i]);
    }

    if (isIdentityMatrix(n, matrix)) {
        printf("The given matrix is an identity matrix.\n");
    } else {
        printf("The given matrix is not an identity matrix.\n");
    }

    return 0;
}