#include <stdio.h>
void swap(int* i, int* j)
{
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}
int main()
{
	int arr[7] = { 1,7,3,5,6,8,2 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int flag = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n -i-1;j++)
		{
			if (arr[j]>arr[j + 1])
			{
				swap(&arr[j],&arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}