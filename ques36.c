// Problem: Given an integer array nums, return an array answer such that answer[i]
// is equal to the product of all the elements of nums except nums[i].
// You must solve it in O(n) time without using division.#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int nums[n], answer[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
     // prefix product
    answer[0] = 1;
    for(int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // suffix product
    int right = 1;
    for(int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right;
        right = right * nums[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
     return 0;
}