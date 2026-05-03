
🧠 Problem: Count Subarrays with Sum Equal to Zero

#include <stdio.h>
#include <stdlib.h>

#define MAX 10001

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prefixSum = 0;
    int count = 0;

    // Hash array for prefix sums
    int *hash = (int*)calloc(2 * MAX, sizeof(int));
    int offset = MAX;

    // Initial condition: prefix sum = 0
    hash[offset] = 1;

    for(int i = 0; i < n; i++) {
        prefixSum += arr[i];

        count += hash[prefixSum + offset];

        hash[prefixSum + offset]++;
    }

    printf("%d\n", count);

    free(hash);
    return 0;
}