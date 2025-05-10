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
void QuickSort(int* arr, int begin, int end)
{
	if (begin >= end)//防止只有一个数字或不存在
		return;
	int left = begin;
	int right = end;
	int keyi = begin;
	while (begin < end)
	{
		while (arr[end] >= arr[keyi] && end > begin)
		{
			end--;
		}
		while (arr[begin] <= arr[keyi] && end > begin)
		{
			begin++;
		}
		swap(&arr[begin], &arr[end]);
	}
	swap(&arr[keyi], &arr[begin]);
	keyi = begin;
	QuickSort(arr, left, keyi - 1);
	QuickSort(arr, keyi + 1, right);//递归了
}

void AdjustDown(int* arr, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;//左孩子
	while (child < n)
	{
		if (child + 1 < n && arr[child] > arr[child + 1])child + 1;//移至右孩子
		if (arr[child] > arr[parent])
		{
			swap(&arr[child], &arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else break;
	}
}
void HeapSort(int* arr, int n)
{
	for (int i = (n - 1 - 1) / 2;i >= 0;i--)//建大堆
	{
		AdjustDown(arr, n, i);
	}
	for (int i = n;i > 1;i--)
	{
		swap(&arr[0], &arr[i - 1]);
		AdjustDown(arr, i - 1, 0);
	}
}