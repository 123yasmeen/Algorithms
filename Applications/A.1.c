#include <stdio.h>
int binarysearch(int list[], int item)
{
    int low = 0;
    int high = 9;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = list[mid];
        if (guess == item)
            return mid;
        if (guess > item)
            high = mid - 1;
        if (guess < item)
            low = mid + 1;
    }
    return -1;
}
void Delete_elements(int list[],int item,int n)
{
    int position = binarysearch(list, item);
    if (position == -1)
    {
        printf("the item is not present");
    }
    else
    {
        for (int i = position; i< n; i++)
        {
            list[i] = list[i + 1];
        }

        n--;
        for (int i = 0; i < n; i++)
        {
            printf("%d ", list[i]);
        }
    }
}
int main()
{
    int item;
    int list[] = { 10,25,38,49,58,67,75,89,98,107 };
    int n = sizeof(list) / sizeof(list[0]);
    printf("enter the number you want to delete\n");
    scanf_s("%d", &item);
    Delete_elements(list, item, n);
	return 0;
}