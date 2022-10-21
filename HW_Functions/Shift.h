#pragma once
#include "Constants.h"

template <typename T>
void shiftLeft(const int n, T arr[]);
template <typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts);
template <typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);

template <typename T>
void shiftRight(const int n, T arr[]);
template <typename T>
void shiftRight(T arr[], const int n, int number_of_shifts);
template <typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);