#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
using namespace std;

void push_back(int*& arr, int& size, int value)
{

	int* newarr = new int [size + 1];
	for (int i = 0; i < size; i++)
	{
		newarr[i] = arr[i];
	}
	newarr[size] = value;
	size++;
	delete[] arr;
	arr = newarr;
} // добавить в конец
void fillarr(int* arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}// заполнить рандомом
void showarr(int* arr, int& size)
{	
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}// вывод массива
void pop_back(int*& arr, int& size)
{
	int* newarr = new int[size--];
	for (int i = 0; i < size; i++)
	{
		newarr[i] = arr[i];
	}
	newarr = arr;
}// убрать с конца
void push_in(int*& arr, int& size, const int value)
{
	int* newarr = new int[size+1];
	for (int i = 0; i < size; i++)
	{
		newarr[i + 1] = arr[i];
	}
	newarr[0] = value;
	delete[] arr;
	arr = newarr;
	size++;
}//добавить в начало
void pop_in(int*& arr, int& size )
{
	int* newarr = new int[size--];
	for (int i = 0; i < size; i++)
	{
		newarr[i] = arr[i + 1];
	}
	delete[] arr;
	arr = newarr;
} //убрать с начала
void push_centr(int*& arr, int& size, int val, int num)
{
	int* newarr = new int[size+1];
	for (int i = 0; i < num-1; i++)
	{
		newarr[i] = arr[i];
	}
	newarr[num - 1] = val;
	for (int i = num; i < size+1; i++)
	{
		newarr[i] = arr[i-1];
	}
	delete[] arr;
	arr = newarr;
	size++;
} //вставить в центр
void pop_centr(int*& arr, int& size, int num)
{
	int* newarr = new int[size - 1];
	for (int i = 0; i < num-1; i++)
	{
		newarr[i] = arr[i];
	}
	for (int i = num-1; i < size-1; i++)
	{
		newarr[i] = arr[i+1];
	}
	delete[] arr;
	arr = newarr;
	size--;
} // убрать из центра



int main()
{
	int  size = 5;
	int* arr = new int[size];

	fillarr(arr, size);
	showarr(arr, size);
	pop_centr(arr, size, 2);
	showarr(arr, size);
}