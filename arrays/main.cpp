#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"







void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int number_of_shifts;
	FillRand(arr, n);
	
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� �������: " << maxValueIn(arr, n) << endl;
	
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);

	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� �������: " << minValueIn(brr, SIZE) << endl;
	cout << "������������ �������� �������: " << maxValueIn(brr, SIZE) << endl;
	
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);

	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);

	
	int i_arr_2[ROWS][COLS];
	//���������� ���������� ������� ���������� �������:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			i_arr_2[i][j] = rand() % 100;
		}
	}

	//����� ���������� ������� �� �����:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << i_arr_2[i][j] << tab;
		}
		cout << endl;
	}

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� �������: " << maxValueIn(i_arr_2, ROWS,COLS) << endl;

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2,ROWS, COLS);

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
}








