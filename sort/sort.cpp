#include"sort.h"
void swap(int* a, int* b)
{
	int tmp;
	tmp = *b;
	*b = *a;
	*a = tmp;
}
void BubbleSort(int* arr, int n)
{
	int end = n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < end-1;j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
		end--;
	}
}
void InsertSort(int* arr, int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		int end = i;
		int tmp = arr[i + 1];
		while (end >= 0)
		{
			if (tmp < arr[end])
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = tmp;
	}
}
void ShellSort(int* arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap /= 2;
		for (int i = 0;i < n - gap;i++)
		{
			int end = i;
			int tmp = arr[i + gap];
			while (end >= 0)
			{
				if (tmp < arr[end])
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = tmp;
		}
	}
}
void SelectSort(int* arr, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int max = begin, min = begin;
		for (int i = begin;i < end;i++)
		{
			if (arr[i] < arr[min])
			{
				min = i;
			}
			if (arr[i] > arr[max])
			{
				max = i;
			}
		}
		swap(&arr[begin], &arr[min]);
		if (begin == max)
		{
			max = min;
		}
		swap(&arr[max], &arr[end]);
		begin++;
		end--;
	}
}
void AdjustDown(int* arr, int n, int root)
{

}