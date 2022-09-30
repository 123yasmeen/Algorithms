#include <stdio.h>
int Maximum_unimodal(int arr[], int start, int end)
{
    /* int max = arr[start];
     for (int i = start + 1; i < end; i++)
     {
         if (arr[i] > max)
             max = arr[i];
         else
             break;
     }
     return max;*/
    int mid = (start + end) / 2;
    if (arr[mid] > arr[mid - 1])
    {
        if (arr[mid] > arr[mid + 1])
            return arr[mid];
        else
            return Maximum_unimodal(arr, mid + 1, end);
    }
    else
        return Maximum_unimodal(arr, start, mid - 1);
}
int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("enter the elements of the array ");
    for (int i = 0;i < n;i++)
        scanf_s("%d", &arr[i]);
    printf("Max element: %d", Maximum_unimodal(arr, 0, n - 1));
    return 0;
}