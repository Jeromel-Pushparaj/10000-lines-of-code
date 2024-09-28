#include <stdio.h>

void multiplyMatrices(int mat1[][3], int mat2[][3], int result[][3], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[3][3];

    int rows1 = sizeof(mat1) / sizeof(mat1[0]);
    int cols1 = sizeof(mat1[0]) / sizeof(mat1[0][0]);
    int cols2 = sizeof(mat2[0]) / sizeof(mat2[0][0]);

    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

    printf("Matrix 1:\n");
    displayMatrix(mat1, rows1, cols1);

    printf("Matrix 2:\n");
    displayMatrix(mat2, cols1, cols2);

    printf("Resultant Matrix:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
