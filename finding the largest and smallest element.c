#include <stdio.h>

void findLargestAndSmallest(int arr[], int n, int *largest, int *smallest)
{
    int i;

    // Initially consider the first element as the largest and smallest
    *largest = arr[0];
    *smallest = arr[0];

    // Start traversing the array from the second element
    for (i = 1; i < n; i++)
    {
        // If current element is greater than largest, update largest
        if (arr[i] > *largest)
            *largest = arr[i];

        // If current element is smaller than smallest, update smallest
        if (arr[i] < *smallest)
            *smallest = arr[i];
    }
}

int main()
{
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest, smallest;

    findLargestAndSmallest(arr, n, &largest, &smallest);

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}