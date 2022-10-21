#include "Constants.h"
#include "stdafx.h"

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