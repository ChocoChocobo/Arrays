#include "stdafx.h"
#include "Constants.h"

void Sum(float sum, const int n, int arr[])
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

void Sum(char sum, const int n, char arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	cout << sum;
}

void Sum(int arr[ROWS][COLS], const int ROWS, const int COLS, float sum)
{
	for (int i = 0; i < ROWS; i++)
	{
		sum = 0;
		for (int j = 0; j < COLS; i++)
		{
			sum += arr[i][j];
		}
		cout << sum;
	}
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

void Avg(float sum, const int n, char arr[])
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

void MinValueIn(char c_min, const int C_SIZE, char arr[])
{
	for (int i = 1; i < C_SIZE; i++)
	{
		if (c_min > arr[i])
			c_min = arr[i];
	}
	cout << c_min;
}

void MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS, int i_min_2)
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

void MaxValueIn(float c_max, const int C_SIZE, char arr[])
{
	for (int i = 1; i < C_SIZE; i++)
	{
		if (c_max < arr[i])
			c_max = arr[i];
	}
	cout << c_max;
}

void MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS, int i_max_2)
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