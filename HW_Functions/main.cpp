#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"
#include "Shift.h"
#include "Sort.h"

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

	cout << "\t\t\t\t\t\tДвумерный массив" << "\n";
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