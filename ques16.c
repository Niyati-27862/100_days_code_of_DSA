// Check if a number is a power of two

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n > 0 && (n & (n - 1)) == 0)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}