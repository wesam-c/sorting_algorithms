#include "sort.h"


int main()
{
    int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: \n");
    print_array(arr, n);
    printf("\n");
    printf("\n");
    bubble_sort(arr, n);
    return 0;
}
