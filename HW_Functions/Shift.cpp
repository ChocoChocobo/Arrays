#include "Constants.h"
#include "Shift.h"

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

void shiftRight(const int C_SIZE, char arr[])
{
	for (int j = 0; j < 2; j++)
	{
		char t;
		t = arr[C_SIZE - 1];
		for (int i = C_SIZE - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = t;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		shiftRight(arr[k], COLS, number_of_shifts);
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

void shiftLeft(const int C_SIZE, char arr[])
{
	for (int j = 0; j < 2; j++)
	{
		char t = arr[0];
		for (int i = 0; i < C_SIZE - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[C_SIZE - 1] = t;
	}
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
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

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		shiftLeft(arr[k], COLS, number_of_shifts);
	}
}