/*
========================================================
🧠 Problem: 918. Maximum Sum Circular Subarray

Given a circular integer array nums of length n, return 
the maximum possible sum of a non-empty subarray of nums.

A circular array means:
- The next element of nums[i] is nums[(i + 1) % n]
- The previous element is nums[(i - 1 + n) % n]

A subarray may include each element at most once.
========================================================
*/

#include <stdio.h>
#include <limits.h>

// Function to find maximum subarray sum (Kadane’s Algorithm)
int kadaneMax(int arr[], int n) {
    int maxSum = arr[0], currSum = arr[0];

    for(int i = 1; i < n; i++) {
        currSum = (currSum + arr[i] > arr[i]) ? currSum + arr[i] : arr[i];
        maxSum = (maxSum > currSum) ? maxSum : currSum;
    }

    return maxSum;
}

// Function to find minimum subarray sum
int kadaneMin(int arr[], int n) {
    int minSum = arr[0], currSum = arr[0];

    for(int i = 1; i < n; i++) {
        currSum = (currSum + arr[i] < arr[i]) ? currSum + arr[i] : arr[i];
        minSum = (minSum < currSum) ? minSum : currSum;
    }

    return minSum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    int maxNormal = kadaneMax(arr, n);
    int minSub = kadaneMin(arr, n);

    int maxCircular;

    // If all elements are negative
    if (maxNormal < 0) {
        maxCircular = maxNormal;
    } else {
        maxCircular = (totalSum - minSub > maxNormal) ? (totalSum - minSub) : maxNormal;
    }

    printf("%d\n", maxCircular);

    return 0;
}