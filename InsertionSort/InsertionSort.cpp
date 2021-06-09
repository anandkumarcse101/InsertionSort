#include<iostream>
#include<stdio.h>
using namespace std;
void insertionSort(int A[], int s)
{
	int i, j = 1, key;
	for (j; j < s; j++)
	{
		key = A[j];
		i = j - 1;
		while ((i >= 0) && (A[i] > key))
		{
			A[i + 1] = A[i];
			i = i - 1;
		}
		A[i + 1] = key;
	}
}
void printResult(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("sorted Value is:%d\n", A[i]);
	}


}
int main()
{
	int As;
	int i;
	
	int A[10];
	int si = sizeof(A) / sizeof(A[0]);
	for (i = 0; i < si; i++)
	{
		cout << "Enter the first Element" << endl;
		cin >> A[i];
	}
	int size = si;
	insertionSort(A, size);
	printResult(A, size);
	return 0;

}
