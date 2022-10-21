#pragma once
#include "Constants.h"

template<typename T>
void Sum(float sum, const int n, T arr[]);

template<typename T>
void Avg(float sum, const int n, T arr[]);

template<typename T>
void MinValueIn(float min, const int n, T arr[]);
template<typename T>
void MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS, float i_min_2);

template<typename T>
void MaxValueIn(float max, const int n, T arr[]);
template<typename T>
void MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS, float i_max_2);