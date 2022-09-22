#include <stdio.h>
#include <stdlib.h>
int binarysearch(int list[],int item)
{
    int low=0;
    int high=9;
    while (low <= high)
    {
        int mid = (low+high)/2;
        int guess=list[mid];
        if(guess==item)
            return mid;
        if(guess>item)
            high=mid-1;
        if(guess<item)
            low=mid+1;
    }
    return -1;
}
int main()
{
    int item;
    int list[]={10,25,38,49,58,67,75,89,98,107};
    printf("guess a number\n");
    scanf("%d",&item);
    int position= binarysearch(list,item);
    if(position==-1)
    {
        printf("the item is not present");
    }
    else
    printf("the item is present at index %d ",position);
    return 0;
}
