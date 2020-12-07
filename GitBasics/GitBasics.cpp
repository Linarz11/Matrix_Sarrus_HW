#include <iostream>
using namespace std;

void Fillrand(int arr[], const int N);
void Print(int arr[], const int N);



void main()
{
	setlocale(LC_ALL, "");
	const int N = 5;
	int arr[N];
	Fillrand(arr, N);
	Print(arr, N);
}


void Fillrand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i]<< "\t";
	}
}