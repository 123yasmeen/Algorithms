#include <stdio.h>
void Merge(int left[], int right[], int arr[], int n, int mid)
{
	int nl = mid;
	int nr = n - mid;
	int i = 0, j = 0, k = 0;
	while (i < nl && j < nr)
	{
		if (left[i] <= right[j])
		{
			arr[k] = left[i];
			k = k + 1;
			i = i + 1;
		}
		else
		{
			arr[k] = right[j];
			k = k + 1;
			j = j + 1;
		}
	}
	while (i < nl)
	{
		arr[k] = left[i];
		k = k + 1;
		i = i + 1;
	}
	while (j < nr)
	{
		arr[k] = right[j];
		k = k + 1;
		j = j + 1;
	}
}
int MergeSort(int arr[], int n)
{

	if (n < 2)
		return n;
	else {
		int mid = n / 2;
		int left[mid];
		int right[n - mid];
		for (int i = 0;i < mid;i++)
			left[i] = arr[i];
		for (int i = mid;i < n;i++)
			right[i - mid] = arr[i];
		MergeSort(left, mid);
		MergeSort(right, n - mid);
		Merge(left, right, arr, n, mid);
	}
}
int main()
{
	int arr[5] = { 3,7,2,1,0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	MergeSort(arr, n);
	for (int i = 0;i < 5;i++)
		printf("%d ", arr[i]);
	return 0;
}