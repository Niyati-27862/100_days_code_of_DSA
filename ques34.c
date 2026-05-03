// Problem: Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int max_sum = nums[0];
    int current_sum = nums[0];

    for(int i = 1; i < n; i++) {
        if(nums[i] > current_sum + nums[i]) {
            current_sum = nums[i];
        } else {
            current_sum = current_sum + nums[i];
        }

        // Update maximum sum found so far
        if(current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("%d\n", max_sum);

    return 0;
}