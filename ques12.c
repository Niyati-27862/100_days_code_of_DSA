// Move all 0's to the end while maintaining order of non-zero elements

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;  // position for non-zero elements

    // Move non-zero elements forward
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining with zeros
    for(int i = j; i < n; i++) {
        arr[i] = 0;
    }

    // Print result
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}