// Find intersection of two arrays (with frequency)

#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);

    int nums1[1000];
    for(int i = 0; i < n1; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n2);

    int nums2[1000];
    for(int i = 0; i < n2; i++) {
        scanf("%d", &nums2[i]);
    }

    int freq[1001] = {0};

    for(int i = 0; i < n1; i++) {
        freq[nums1[i]]++;
    }

    // Find intersection
    for(int i = 0; i < n2; i++) {
        if(freq[nums2[i]] > 0) {
            printf("%d ", nums2[i]);
            freq[nums2[i]]--;
        }
    }

    return 0;
}