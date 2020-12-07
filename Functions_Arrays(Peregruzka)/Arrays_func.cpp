#include <iostream>
using namespace std;
	const int ROWS = 8;
	const int COLS = 5;

	void Fillrand(int arr[], const int N);
	void Fillrand(double arr[], const int N);
void Fillrand(int arr[ROWS][COLS], const int M, const int N);
void Fillrand(double arr[ROWS][COLS], const int M, const int N);

	void Print(int arr[], const int N);
	void Print(double arr[], const int N);
void Print(int arr[ROWS][COLS], const int M, const int N);
void Print(double arr[ROWS][COLS], const int M, const int N);


//int Sum(int arr[], const int N);
//double Avg(int  arr[], const int N);
//int minvaluein(int arr[], const int N);
//int maxvaluein(int arr[], const int N);



void main()
{
	setlocale(LC_ALL, "");

	const int N = 5;
	int arr[N];
#ifdef DEBUG
	Fillrand(arr, N);
	Print(arr, N);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, N) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, N) << endl;
	cout << "Min = " << minvaluein(arr, N) << endl;
	cout << "Max = " << maxvaluein(arr, N) << endl;


	//cout << sizeof(arr) << endl;

	const int M = 10;
	int brr[M];
	Fillrand(brr, M);
	Print(brr, M);
	cout << endl;
	cout << "Сумма элементов массива Б: " << Sum(brr, M) << endl;
	cout << "Среднее арифметическое: " << Avg(brr, M) << endl;
	cout << "Min = " << minvaluein(brr, M) << endl;
	cout << "Max = " << maxvaluein(brr, M) << endl;


	const int C = 6;
	int crr[C];
	Fillrand(crr, C);
	Print(crr, C);
	cout << endl;
	cout << "Сумма элементов массива C: " << Sum(crr, C) << endl;
	cout << "Среднее арифметическое: " << Avg(crr, C) << endl;
	cout << "Min = " << minvaluein(crr, C) << endl;
	cout << "Max = " << maxvaluein(crr, C) << endl;

#endif // DEBUG
	Fillrand (arr, N);
	Print(arr, N);

	cout << " ОДномерный массив типа Double \n";
	double brr[N];
	Fillrand(brr, N);
	Print(brr, N);

	cout << "Двумерный массив типа Int\n";
	int arr2[ROWS][COLS];
	Fillrand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << endl;

	cout << "Двумерный массив типа double\n";
	int brr2[ROWS][COLS];
	Fillrand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
}

void Fillrand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand()%100;
	}
}
void Fillrand(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}

}

void Fillrand(int arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 100;
		}
		
	}
}

void Fillrand(double arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = double(rand()% 10000);
		}
		
	}
}

void Print(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void Print (double arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

//
//int Sum(int arr[], const int N)
//{
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//double Avg(int arr[], const int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		return (double)Sum(arr, N) / N;
//	}
//}
//int minvaluein(int arr[], const int N)
//{
//	int min = arr[0];
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] < min)min = arr[i];
//	}
//	return min;
//}
//int maxvaluein(int arr[], const int N)
//{
//	int max = arr[0];
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] > max) max = arr[i];
//	}
//	return max;
//}