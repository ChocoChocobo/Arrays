#pragma once
#include "Constants.h"

void shiftLeft(const int n, int arr[]);
void shiftLeft(const int D_SIZE, double arr[]);
void shiftLeft(const int F_SIZE, float arr[]);
void shiftLeft(const int C_SIZE, char arr[]);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);

void shiftRight(const int n, int arr[]);
void shiftRight(const int D_SIZE, double arr[]);
void shiftRight(const int F_SIZE, float arr[]);
void shiftRight(const int C_SIZE, char arr[]);
void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);