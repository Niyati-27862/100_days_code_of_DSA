// Reverse a string (mirror the given code name)

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%s", str);

    int left = 0;
    int right = strlen(str) - 1;

    // Reverse using two-pointer approach
    while(left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("%s\n", str);

    return 0;
}