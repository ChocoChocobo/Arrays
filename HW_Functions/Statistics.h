#pragma once
#include "Constants.h"

void Sum(float sum, const int n, int arr[]);
void Sum(double sum, const int n, double arr[]);
void Sum(float sum, const int n, float arr[]);
void Sum(char sum, const int n, char arr[]);

void Avg(float sum, const int n, int arr[]);
void Avg(double sum, const int n, double arr[]);
void Avg(float sum, const int n, float arr[]);
void Avg(float sum, const int n, char arr[]);

void MinValueIn(int min, const int n, int arr[]);
void MinValueIn(double d_min, const int D_SIZE, double arr[]);
void MinValueIn(float f_min, const int F_SIZE, float arr[]);
void MinValueIn(char c_min, const int C_SIZE, char arr[]);
void MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS, int i_min_2);

void MaxValueIn(int max, const int n, int arr[]);
void MaxValueIn(double d_max, const int D_SIZE, double arr[]);
void MaxValueIn(float f_max, const int F_SIZE, float arr[]);
void MaxValueIn(float c_max, const int C_SIZE, char arr[]);
void MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS, int i_max_2);
