// Merge two sorted arrays where nums1 has extra space at end to hold nums2

#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);
    int nums1[200];

    // first m elements
    for(int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n);
    int nums2[100];

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    // start from end
    int i = m - 1;        // last element of nums1
    int j = n - 1;        // last element of nums2
    int k = m + n - 1;    // last position of nums1

    // merge from back
    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // if nums2 still has elements
    while(j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    // print result
    for(int x = 0; x < m + n; x++) {
        printf("%d ", nums1[x]);
    }

    return 0;
}