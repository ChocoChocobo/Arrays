#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(const int n, int arr[]);
void FillRand(const int n, double arr[]);
void FillRand(const int n, float arr[]);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int RORWS, const int COLS);

void Print(const int n, int arr[]);
void Print(const int n, double arr[]);
void Print(const int n, float arr[]);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);

void Sum(float sum, const int n, int arr[]);
void Sum(double sum, const int n, double arr[]);
void Sum(float sum, const int n, float arr[]);
void Sum(float sum, int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sum(float sum, double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sum(float sum, float arr[ROWS][COLS], const int ROWS, const int COLS);

void Avg(float sum, const int n, int arr[]);
void Avg(double sum, const int n, double arr[]);
void Avg(float sum, const int n, float arr[]);
void Avg(float sum, int arr[ROWS][COLS], const int ROWS, const int COLS);
void Avg(float sum, double arr[ROWS][COLS], const int ROWS, const int COLS);
void Avg(float sum, float arr[ROWS][COLS], const int ROWS, const int COLS);

void MinValueIn(int min, const int n, int arr[]);
void MinValueIn(double d_min, const int D_SIZE, double arr[]);
void MinValueIn(float f_min, const int F_SIZE, float arr[]);

void MaxValueIn(int max, const int n, int arr[]);
void MaxValueIn(double d_max, const int D_SIZE, double arr[]);
void MaxValueIn(float f_max, const int F_SIZE, float arr[]);

void shiftLeft(const int n, int arr[]);
void shiftLeft(const int D_SIZE, double arr[]);
void shiftLeft(const int F_SIZE, float arr[]);

void shiftRight(const int n, int arr[]);
void shiftRight(const int D_SIZE, double arr[]);
void shiftRight(const int F_SIZE, float arr[]);

void Sort(int arr[], const int n);
void Sort(double arr[], const int D_SIZE);
void Sort(float arr[], const int F_SIZE);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	float sum = 0;
	cout << "\t\t\t\t\t\tМассив типа int" << "\n";
	cout << "Заполненный массив случайными числами: "; FillRand(n, arr); Print(n, arr); cout << "\n";
	int min = arr[0];
	double d_min = arr[0];
	float f_min = arr[0];

	int max = arr[0];
	double d_max = arr[0];
	float f_max = arr[0];
	cout << "Сумма элементов массива: "; Sum(sum, n, arr); cout << "\n";
	cout << "Среднее арифметическое элементов массива: "; Avg(sum, n, arr); cout << "\n";
	cout << "Минимальное значение массива: "; MinValueIn(min, n, arr); cout << "\n";
	cout << "Максимальное значение массива: "; MaxValueIn(max, n, arr); cout << "\n";
	cout << "Сдвиг массива вправо: "; shiftRight(n, arr); Print(n, arr); cout << "\n";
	cout << "Сдвиг массива влево: "; shiftLeft(n, arr); Print(n, arr); cout << "\n";
	cout << "Отсортируем массив: "; Sort(arr, n); Print(n, arr); cout << "\n\n";
	
	cout << "\t\t\t\t\t\tМассив типа double" << "\n";
	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	cout << "Заполненный случайными числами: "; FillRand(D_SIZE, d_arr); Print(D_SIZE, d_arr); cout << "\n";
	cout << "Сумма элементов массива: "; Sum(sum, D_SIZE, d_arr); cout << "\n";
	cout << "Среднее арифметическое: "; Avg(sum, D_SIZE, d_arr); cout << "\n";
	cout << "Минимальное значени: "; MinValueIn(d_min, D_SIZE, d_arr); cout << "\n";
	cout << "Максимальное значение: "; MaxValueIn(d_max, D_SIZE, d_arr); cout << "\n";
	cout << "Сдвиг массива вправо: "; shiftLeft(D_SIZE, d_arr); Print(D_SIZE, d_arr); cout << "\n";
	cout << "Сдвиг массива влево: "; shiftRight(D_SIZE, d_arr); Print(D_SIZE, d_arr); cout << "\n";
	cout << "Отсортируем массив: "; Sort(d_arr, D_SIZE); Print(D_SIZE, d_arr); cout << "\n\n";

	cout << "\t\t\t\t\t\tМассив типа float" << "\n";
	const int F_SIZE = 5;
	float f_arr[F_SIZE];
	cout << "Заполненный случайными числами: "; FillRand(F_SIZE, f_arr); Print(F_SIZE, f_arr); cout << "\n";
	cout << "Сумма элементов массива: "; Sum(sum, F_SIZE, f_arr); cout << "\n";
	cout << "Среднее арифметическое: "; Avg(sum, F_SIZE, f_arr); cout << "\n";
	cout << "Минимальное значени: "; MinValueIn(f_min, F_SIZE, f_arr); cout << "\n";
	cout << "Максимальное значение: "; MaxValueIn(f_max, F_SIZE, f_arr); cout << "\n";
	cout << "Сдвиг массива вправо: "; shiftLeft(F_SIZE, f_arr); Print(F_SIZE, f_arr); cout << "\n";
	cout << "Сдвиг массива влево: "; shiftRight(F_SIZE, f_arr); Print(F_SIZE, f_arr); cout << "\n";
	cout << "Отсортируем массив: "; Sort(f_arr, F_SIZE); Print(F_SIZE, f_arr); cout << "\n\n";

	cout << "\t\t\t\t\t\tМассив типа char" << "\n";
	const int C_SIZE = 5;
	char c_arr[C_SIZE];
	cout << "Заполненный случайными числами: "; FillRand(F_SIZE, f_arr); Print(F_SIZE, f_arr); cout << "\n";
	cout << "Сумма элементов массива: "; Sum(sum, F_SIZE, f_arr); cout << "\n";
	cout << "Среднее арифметическое: "; Avg(sum, F_SIZE, f_arr); cout << "\n";
	cout << "Минимальное значени: "; MinValueIn(f_min, F_SIZE, f_arr); cout << "\n";
	cout << "Максимальное значение: "; MaxValueIn(f_max, F_SIZE, f_arr); cout << "\n";
	cout << "Сдвиг массива вправо: "; shiftLeft(F_SIZE, f_arr); Print(F_SIZE, f_arr); cout << "\n";
	cout << "Сдвиг массива влево: "; shiftRight(F_SIZE, f_arr); Print(F_SIZE, f_arr); cout << "\n";
	cout << "Отсортируем массив: "; Sort(f_arr, F_SIZE); Print(F_SIZE, f_arr); cout << "\n\n";

	cout << "\t\t\t\t\t\tДвумерный массив типа float" << "\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "\n";
	cout << "Сумма элементов массива: "; Sum(sum, i_arr_2, ROWS, COLS);
	cout << "\n\n";

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
}

void FillRand(const int n, int arr[])
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(const int n, double arr[])
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(const int n, float arr[])
{
	//srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(const int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "   ";
	}
}

void Print(const int n, double arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "   ";
	}
}

void Print(const int n, float arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "   ";
	}
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Sum(float sum, const int n,int arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	cout << sum;
}

void Sum(double sum, const int n, double arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	cout << sum;
}

void Sum(float sum, const int n, float arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	cout << sum;
}

void Sum(float sum, int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[ROWS][COLS] > 0)
				sum += arr[i][j];
		}
	}
	cout << sum;
}

void Avg(float sum, const int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	sum /= n;
	cout << sum;
}

void Avg(double sum, const int n, double arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	sum /= n;
	cout << sum;
}

void Avg(float sum, const int n, float arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	sum /= n;
	cout << sum;
}

void MinValueIn(int min, const int n, int arr[])
{
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) 
			min = arr[i];
	}
	cout << min;
}

void MinValueIn(double d_min, const int D_SIZE, double arr[])
{
	for (int i = 1; i < D_SIZE; i++)
	{
		if (d_min > arr[i])
			d_min = arr[i];
	}
	cout << d_min;
}

void MinValueIn(float f_min, const int F_SIZE, float arr[])
{
	for (int i = 1; i < F_SIZE; i++)
	{
		if (f_min > arr[i])
			f_min = arr[i];
	}
	cout << f_min;
}

void MaxValueIn(int max, const int n, int arr[])
{
	for (int i = 1; i < n; i++)
	{
	    if (max < arr[i]) 
		    max = arr[i];
	}
	cout << max;
}

void MaxValueIn(double max, const int D_SIZE, double arr[])
{
	for (int i = 1; i < D_SIZE; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	cout << max;
}

void MaxValueIn(float f_max, const int F_SIZE, float arr[])
{
	for (int i = 1; i < F_SIZE; i++)
	{
		if (f_max < arr[i])
			f_max = arr[i];
	}
	cout << f_max;
}

void shiftRight(const int n, int arr[])
{
	for (int j = 0; j < 2; j++)
	{
		int t;
		t = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = t;
	}
}

void shiftRight(const int D_SIZE, double arr[])
{
	for (int j = 0; j < 2; j++)
	{
		float t;
		t = arr[D_SIZE - 1];
		for (int i = D_SIZE - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = t;
	}
}

void shiftRight(const int F_SIZE, float arr[])
{
	for (int j = 0; j < 2; j++)
	{
		float t;
		t = arr[F_SIZE - 1];
		for (int i = F_SIZE - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = t;
	}
}

void shiftLeft(const int n, int arr[])
{
	for (int j = 0; j < 2; j++)
	{
		int t = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = t;
	}
}

void shiftLeft(const int D_SIZE, double arr[])
{
	for (int j = 0; j < 2; j++)
	{
		double t = arr[0];
		for (int i = 0; i < D_SIZE - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[D_SIZE - 1] = t;
	}
}

void shiftLeft(const int F_SIZE, float arr[])
{
	for (int j = 0; j < 2; j++)
	{
		double t = arr[0];
		for (int i = 0; i < F_SIZE - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[F_SIZE - 1] = t;
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int D_SIZE)
{
	for (int i = 0; i < D_SIZE; i++)
	{
		for (int j = i + 1; j < D_SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int F_SIZE)
{
	for (int i = 0; i < F_SIZE; i++)
	{
		for (int j = i + 1; j < F_SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}






