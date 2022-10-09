#include <iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 5;
	int arr[n];
	
	for (int i = 0; i < n; i++)
	{
		cout << "Введите значения ячейки [" << i << "]: "; cin >> arr[i];
	}
	cout << "\n";

	cout << "Вот ваш массив: " << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << "arr [" << i << "]= " << arr[i] << "\n";
	}
	cout << "\n";

	cout << "Массив в обратном порядке: " << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[n - i - 1] << "\t";
		
	}
	cout << "\n" << "\n";
	

	cout << "Сумма элементов массива: " << "\n";
	cout << arr[0] << "+" << arr[1] << "+" << arr[2] << "+" << arr[3] << "+" << arr[4] << "=" << arr[0] + arr[1] + arr[2] + arr[3] + arr[4] << "\n";
	cout << "\n";

	cout << "Среднее арифметическое элементов массива: " << endl;
	cout << "(" << arr[0] << "+" << arr[1] << "+" << arr[2] << "+" << arr[3] << "+" << arr[4] << ")" << "/" << n << "=" << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / n << "\n";
	cout << "\n";

	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	cout << "Минимальное: " << min << endl;
	cout << "Максимальное: " << max << endl;
	
	
}