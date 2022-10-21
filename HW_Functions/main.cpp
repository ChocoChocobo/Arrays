#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(const int n, int arr[]);
void FillRand(const int n, double arr[]);
void FillRand(const int n, float arr[]);
void FillRand(const int n, char arr[]);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(const int n, T arr[]);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sum(float sum, const int n, T arr[]);

template<typename T>
void Avg(float sum, const int n, T arr[]);

template<typename T>
void MinValueIn(float min, const int n, T arr[]);
template<typename T>
void MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS, float i_min_2);

template<typename T>
void MaxValueIn(float max, const int n, T arr[]);
template<typename T>
void MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS, float i_max_2);

template <typename T>
void shiftLeft(const int n, T arr[]);
template <typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts);
template <typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);

template <typename T>
void shiftRight(const int n, T arr[]);
template <typename T>
void shiftRight(T arr[], const int n, int number_of_shifts);
template <typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);

template <typename T>
void Sort(T arr[], const int n);
template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	float sum = 0;
	int f2_sum = 0;
	cout << "\t\t\t\t\t\tМассив типа int" << "\n";
	cout << "Заполненный массив случайными числами: "; FillRand(n, arr); Print(n, arr); cout << "\n";
	int min = arr[0];
	double d_min = arr[0];
	float f_min = arr[0];
	char c_min = arr[0];

	int max = arr[0];
	double d_max = arr[0];
	float f_max = arr[0];
	char c_max = arr[0];
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

	//Массив типа char, но там смайлики
	cout << "\t\t\t\t\t\tМассив типа char" << "\n";
	const int C_SIZE = 5;
	char c_arr[C_SIZE];
	cout << "Заполненный случайными числами: "; FillRand(C_SIZE, c_arr); Print(C_SIZE, c_arr); cout << "\n";
	cout << "Сумма элементов массива: "; Sum(sum, C_SIZE, c_arr); cout << "\n";
	cout << "Среднее арифметическое: "; Avg(sum, C_SIZE, c_arr); cout << "\n";
	cout << "Минимальное значени: "; MinValueIn(c_min, C_SIZE, c_arr); cout << "\n";
	cout << "Максимальное значение: "; MaxValueIn(c_max, C_SIZE, c_arr); cout << "\n";
	cout << "Сдвиг массива вправо: "; shiftLeft(C_SIZE, c_arr); Print(C_SIZE, c_arr); cout << "\n";
	cout << "Сдвиг массива влево: "; shiftRight(C_SIZE, c_arr); Print(C_SIZE, c_arr); cout << "\n";
	cout << "Отсортируем массив: "; Sort(c_arr, C_SIZE); Print(C_SIZE, c_arr); cout << "\n\n";

	cout << "\t\t\t\t\t\tДвумерный массив типа int" << "\n";
	const int ROWS = 3;
	const int COLS = 4;
	int i_arr_2[ROWS][COLS];
	cout << "Заполненный случайными числами: "; cout << "\n";
	FillRand(i_arr_2, ROWS, COLS); Print(i_arr_2, ROWS, COLS);
	int i_min_2 = 0;
	int i_max_2 = 0;
	cout << "Минимальное значение: "; MinValueIn(i_arr_2, ROWS, COLS, i_min_2); cout << "\n";
	cout << "Максимальное значение: "; MaxValueIn(i_arr_2, ROWS, COLS, i_max_2); cout << "\n";
	cout << "Сдвиг массива влево: "; cout << "\n";
	shiftLeft(i_arr_2, ROWS, COLS, 3); Print(i_arr_2, ROWS, COLS);
	cout << "Сдвиг массива вправо: "; cout << "\n";
	shiftRight(i_arr_2, ROWS, COLS, 3); Print(i_arr_2, ROWS, COLS); //Массив вернулся на своё место
	cout << "Отсортируем массив: "; cout << "\n";
	Sort(i_arr_2, ROWS, COLS); Print(i_arr_2, ROWS, COLS);
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

void FillRand(const int n, char arr[])
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 256;
		//arr[i] /= 100;
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

template<typename T>
void Print(const int n, T arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "   ";
	}
}

template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
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

template<typename T>
void Sum(float sum, const int n, T arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	cout << sum;
}

template<typename T>
void Avg(float sum, const int n, T arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	sum /= n;
	cout << sum;
}

template<typename T>
void MinValueIn(float min, const int n, T arr[])
{
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << min;
}

template<typename T>
void MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS, float i_min_2)
{
	i_min_2 = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < i_min_2)
				i_min_2 = arr[i][j];
		}
	}
	cout << i_min_2;
}

template<typename T>
void MaxValueIn(float max, const int n, T arr[])
{
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	cout << max;
}

template<typename T>
void MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS, float i_max_2)
{
	i_max_2 = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > i_max_2)
				i_max_2 = arr[i][j];
		}
	}
	cout << i_max_2;
}

template<typename T>
void shiftRight(const int n, T arr[])
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

template<typename T>
void shiftRight(T arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}

template <typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		shiftRight(arr[k], COLS, number_of_shifts);
	}
}

template <typename T>
void shiftLeft(const int n, T arr[])
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

template <typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template <typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		shiftLeft(arr[k], COLS, number_of_shifts);
	}
}

template <typename T>
void Sort(T arr[], const int n)
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

template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = i + 1; j < ROWS * COLS; j++)
		{
			if (arr[0][j] < arr[0][i])
			{
				int buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
			}
		}
	}
}