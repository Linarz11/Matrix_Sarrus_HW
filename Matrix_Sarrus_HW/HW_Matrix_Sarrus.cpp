#include <iostream>
using namespace std;
const int N = 3;
void Fillrand(int arr[N][N], const int N);
void Print(int arr[N][N], const int N);



void main()
{
	setlocale(LC_ALL, "");
	int A[N][N];
	Fillrand(A, N);
	Print(A, N);

	int B[N][N * 2]{};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			B[i][j] = B[i][j + N] = A[i][j];
		}
	}

	cout << "\nРасширенная матрица В: " << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N * 2; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	int summ_diags;
	int sum_plus = 0;

	for (int i = 0; i < N; i++)
	{
		summ_diags = 1;
		for (int j = 0; j < N; j++)
		{
			summ_diags *= B[j][j + i];
		}
		sum_plus += summ_diags;
	}
	cout << "Summa proizvedeniy glavnoy diagonaly = " << sum_plus << endl;

	int sum_minus = 0;
	for (int i = 0; i < N; i++)
	{
		summ_diags = 1;
			for (int j = 0; j < N; j++)
			{
				summ_diags *= B[N - j - 1][j + 1];

			}
			sum_minus += summ_diags;
	}
	cout << "Summa proizveleniy pobochnoy diagonaly = " << sum_minus << endl;
	cout << "Opredelitel po Sairusu = " << sum_plus - sum_minus << endl;



}

void Fillrand(int arr[N][N], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}


void Print(int arr[N][N], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j]<< "\t";
		}
		cout << endl;
	}
}
