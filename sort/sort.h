#pragma once
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
//交换
void swap(int* a, int* b);
// 选择排序
void SelectSort(int* a, int n);
//（向下调整算法）
void AdjustDwon(int* a, int n, int root);
// 堆排序
void HeapSort(int* a, int n);
//希尔排序(插入的特殊形式)
void ShellSort(int* arr, int n);
//插入排序
void InsertSort(int* arr, int n);
//快速排序
void QuickSort(int* arr, int begin,int end);
//冒泡排序
void BubbleSort(int* arr, int n);