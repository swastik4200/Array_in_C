#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    // search starts 
    while (low <= high)
    {

        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
    // search ends 
}
int main()
{
    // unsorted array for linear search 
    // int arr[] = {1, 3, 5, 56, 4, 3, 23, 5, 4, 54, 63, 49, 56, 34};
    // int size = sizeof(arr) / sizeof(int);
    // int element;
    // printf("enter the element you want to search");
    // scanf("%d", &element); 

    // Sorted array for binary search
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 444;
    int searchindex = binarysearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchindex);
    return 0;
}