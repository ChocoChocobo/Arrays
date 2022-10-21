#include "Constants.h"

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