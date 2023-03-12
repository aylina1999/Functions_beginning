#pragma once
#include"stdafx.h"
#include"Statistics.h"
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);


double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);


int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts = 0);
void shiftLeft(double arr[], const int n, int number_of_shifts = 0);

void shiftRight(int arr[], const int n, int number_of_shifts = 0);
void shiftRight(double arr[], const int n, int number_of_shifts = 0);