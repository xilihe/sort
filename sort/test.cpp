#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"
int main()
{
	int n;
	scanf("%d", &n);
	int a[100] = { 0 };
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0;i < n;i++)
	{
	printf("%d ", a[i]);
	}printf("\n ");
	SelectSort(a, n);
	//InsertSort(a, n);
	//ShellSort(a, n);
	//BubbleSort(a, n);
	for (int i = 0;i < n;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}