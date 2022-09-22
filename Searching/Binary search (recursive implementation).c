#include <stdio.h>
#include <stdlib.h>
int binarysearch(int list[],int low,int high, int item)
{
    int mid = (low + high) / 2;
    int guess = list[mid];
    if (low > high)
        return -1;
    else if (guess == item)
        return mid;
     else if (guess > item)
         return binarysearch(list,low, mid - 1,item);
     else
         return binarysearch(list, mid + 1,high,item);
    
   
}
int main()
{
    int item;
    int list[] = { 10,25,38,49,58,67,75,89,98,107 };
    printf("guess a number\n");
    scanf_s("%d", &item);
    int position = binarysearch(list,0,9,item);
    if (position == -1)
    {
        printf("the item is not present");
    }
    else
        printf("the item is present at index %d ", position);
    return 0;
}
