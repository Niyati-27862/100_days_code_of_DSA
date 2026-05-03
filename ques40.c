
#Given an integer array nums, find all unique triplets 
[a, b, c] such that a + b + c = 0.
The solution must not contain duplicate triplets.

#include <stdio.h>
#include <stdlib.h>

// Comparator for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    for(int i = 0; i < n - 2; i++) {
        // Skip duplicates
        if(i > 0 && arr[i] == arr[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;

        while(left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if(sum == 0) {
                printf("[%d, %d, %d]\n", arr[i], arr[left], arr[right]);

                // Skip duplicates
                while(left < right && arr[left] == arr[left + 1]) left++;
                while(left < right && arr[right] == arr[right - 1]) right--;

                left++;
                right--;
            }
            else if(sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return 0;
}