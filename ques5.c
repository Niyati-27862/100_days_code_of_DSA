// Linear Search: Find key k in an array and count number of comparisons

#include <stdio.h>

int main() {
    int n, i, k;
    int arr[100];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key: ");
    scanf("%d", &k);

    int comparisons = 0;
    int foundIndex = -1;

    for(i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            foundIndex = i;
            break;
        }
    }

    if(foundIndex != -1)
        printf("Found at index %d\n", foundIndex);
    else
        printf("Not Found\n");

    printf("Comparisons = %d\n", comparisons);

    return 0;
}