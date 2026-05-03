// Transpose of a matrix

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[100][100];

    // Input matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print transpose
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}