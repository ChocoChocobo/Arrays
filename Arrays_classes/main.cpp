#include <iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	int c = Add(a, b); //Function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

int Add(int a, int b) //Function definition
{
	//Addition
	int c = a + b;
	return c;
}

int Sub(int a, int b)
{
	//Substraction
	return a - b;
}

int Mul(int a, int b)
{
	//Nultiplication
	return a * b;
}

int Div(int a, int b)
{
	//Division
	return (double) a / b;
}


