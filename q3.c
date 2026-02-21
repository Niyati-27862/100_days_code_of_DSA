//Delete an Element from an Array
#include <stdio.h>

int main()
{
    int n, position;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter position to delete: ");
    scanf("%d", &position);

    
    for(int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    } 

    printf("Updated array:\n");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
