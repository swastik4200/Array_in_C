#include <stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        // swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
void arrayPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of the element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 69};
    printf("\nBefore reversing the aray \n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter reversing the aray \n");
    arrayPrint(arr);
}
