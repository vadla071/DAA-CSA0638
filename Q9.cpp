#include <stdio.h>
#include <stdlib.h>
void multiply_matrices(int** matrix1, int** matrix2, int** result) {
    int i, j, k;
    for (i = 0; i < matrix1.rows; i++) {
        for (j = 0; j < matrix2.cols; j++) {
            for (k = 0; k < matrix1.cols; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void calculate_time_complexity(int** matrix1, int** matrix2) {
    int i, j, k;
    int complexity = 0;
    for (i = 0; i < matrix1.rows; i++) {
        for (j = 0; j < matrix2.cols; j++) {
            for (k = 0; k < matrix1.cols; k++) {
                complexity += 1;
            }
        }
    }
    printf("Time complexity: %d\n", complexity);
}

int main() {
    int** matrix1 = (int**)malloc(sizeof(int*) * 3);
    int** matrix2 = (int**)malloc(sizeof(int*) * 3);
    int** result = (int**)malloc(sizeof(int*) * 3);

    for (int i = 0; i < 3; i++) {
        matrix1[i] = (int*)malloc(sizeof(int) * 3);
        matrix2[i] = (int*)malloc(sizeof(int) * 3);
        result[i] = (int*)malloc(sizeof(int) * 3);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix1[i][j] = rand() % 10;
            matrix2[i][j] = rand() % 10;
        }
    }

    multiply_matrices(matrix1, matrix2, result);

    calculate_time_complexity(matrix1, matrix2);

    for (int i = 0; i < 3; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
