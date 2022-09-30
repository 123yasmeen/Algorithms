#include <stdio.h>

void Delete_elements(int list[], int position, int n)
{
    if (position < n)
    {
        for (int i = position - 1; i < n - 1; i++)
        {
            list[i] = list[i + 1];
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", list[i]);
        }
    }
    else
        printf("the deletion can not happen check if you entered valid position\n");
}
int main()
{
    int position;
    int list[] = { 10,25,38,49,58,67,75,89,98,107 };
    int n = sizeof(list) / sizeof(list[0]);
    printf("enter the position you want to delete\n");
    scanf_s("%d", &position);
    Delete_elements(list, position, n);
    return 0;
}