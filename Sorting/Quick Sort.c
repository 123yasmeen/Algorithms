#include <stdio.h>
void swap(int* i, int* j)
{
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}
int partition(int arr[], int start, int end)
{
	int pivot = arr[end];
	int partition_index = start;
	int i;
	for (i = start;i < end;i++)
	{
		if (arr[i] <= pivot)
		{
			swap(&arr[i], &arr[partition_index]);
			partition_index++;
		}
	}
	swap(&arr[partition_index], &arr[i]);
	return partition_index;
}
int QuickSort(int arr[], int start, int end)
{
	if (start < end)
	{
		int partition_index = partition(arr, start, end);
		QuickSort(arr, start, partition_index - 1);
		QuickSort(arr, partition_index + 1, end);
	}
	return 0;
}
int main()
{
	int arr[4] = { 1,41,11,2 };
	int l = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, l - 1);
	for (int i = 0;i < l;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}