#include "stdafx.h"
#include "Constants.h"


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

void Print(const int n, char arr[])
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