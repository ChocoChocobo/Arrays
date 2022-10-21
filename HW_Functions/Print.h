#pragma once
#include "Constants.h"
#include "stdafx.h"

template<typename T>
void Print(const int n, T arr[]);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

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