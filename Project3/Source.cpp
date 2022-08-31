#include <iostream>
using namespace std;

//#define ex_1
//#define ex_2
//#define ex_3
#define ex_4
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef ex_1
	const int n = 5;
	int arr[n];
	cout << "Введите 5 элементов массива -> " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl << "Введенный Вами массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << "Ваш массив наоборот: " << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << arr[n - i] << "  ";
	}
	int sum = 0;
	cout << endl << endl << "Сумма элементов Вашего массива: ";
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << sum << endl << endl;
	cout << "Среднее арифметическое элементов Вашего массива: " << sum / 5 << endl << endl;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	cout << "Максимальное значение Вашего массива: " << max << endl << endl;
	int min = arr[1];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	cout << "Минимальное значение Вашего массива: " << min << endl << endl;
#endif
#ifdef ex_2
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << "Введите количество элементов, на которое необходимо сдвинуть массив (от - 9 до 9):";
	double shift = 0;
	cin >> shift;
	for (int i = 0; i < n; i++)
	{
		if (shift >= 0)
		{
			arr[i] = arr[i] + shift;
			if (arr[i] > 10) arr[i] = arr[i] - 10;
			cout << arr[i] << "  ";
		}
		else
		{
			arr[i] = arr[i] + shift;
			if (arr[i] < 1) arr[i] = arr[i] + 10;
			else if (arr[i] > 10) arr[i] = arr[i] - 10;
			cout << arr[i] << "  ";
		}
	}
#endif 
#ifdef ex_3
	cout << "Программа перевода чисел из десятичной в двоичную систему счисления." << endl << "Введите число от 0 до 255 -> ";
	int chislo = 0;
	cin >> chislo;
	const int n = 8;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = chislo % 2;
		chislo = chislo / 2;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[n - i] << "  ";
	}
#endif
#ifdef ex_4
	cout << "Программа перевода чисел из десятичной в шеснадцатеричную систему счисления." << endl << "Введите число от 0 до 255 -> ";
	int chislo = 0;
	cin >> chislo;
	int chislo_1 = 0;
	int chislo_2 = 0;
	chislo_1 = chislo / 16;
	chislo_2 = chislo % 16;
	cout << endl << "0" << "x";
	switch (chislo_1)
	{
	case 10: cout << "A"; break;
	case 11: cout << "B"; break;
	case 12: cout << "C"; break;
	case 13: cout << "D"; break;
	case 14: cout << "E"; break;
	case 15: cout << "F"; break;
	default: cout << chislo_1; break;
	}
	switch (chislo_2)
	{
	case 10: cout << "A"; break;
	case 11: cout << "B"; break;
	case 12: cout << "C"; break;
	case 13: cout << "D"; break;
	case 14: cout << "E"; break;
	case 15: cout << "F"; break;
	default: cout << chislo_2; break;
	}
#endif

}