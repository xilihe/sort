#pragma once
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
//����
void swap(int* a, int* b);
// ѡ������
void SelectSort(int* a, int n);
//�����µ����㷨��
void AdjustDwon(int* a, int n, int root);
// ������
void HeapSort(int* a, int n);
//ϣ������(�����������ʽ)
void ShellSort(int* arr, int n);
//��������
void InsertSort(int* arr, int n);
//��������
void QuickSort(int* arr, int begin,int end);
//ð������
void BubbleSort(int* arr, int n);