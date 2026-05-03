// Check if matrix is Toeplitz (all diagonals have same elements)

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[100][100];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isToeplitz = 1;
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] != matrix[i - 1][j - 1]) {
                isToeplitz = 0;
                break;
            }
        }
        if(isToeplitz == 0)
            break;
    }

    if(isToeplitz)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}