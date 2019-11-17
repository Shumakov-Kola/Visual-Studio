#include "windows.h"
#include "cmath"
#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");




	int deystvie;

	cout << "Сделайте выбор" << endl;

	cout << "1-Переведение" << endl << "2-Сложение" << endl << "3-Вычитание" << endl << "4-Умножение" << endl << "5-Деление" << endl << "Введите действие: ";
	for (;;) {
		cin >> deystvie;

		if (deystvie == 1 || deystvie == 2 || deystvie == 3 || deystvie == 4 || deystvie == 5) {
			break;
		}
		else
		{
			{ cout << "Неправильный ввод!" << endl << "Введите число снова: ";
			}
		}
	}

	switch (deystvie)
	{
		int chislo, chislo1, system1, system2, system3;
		int otvet, otvet1, k, n, rez;
	case 1:
		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число: ";
			cin >> chislo;
			cout << "Введите систему числение числа: ";
			cin >> system1;
			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;
			if (a >= system1 || b >= system1 || c >= system1 || d >= system1 || e >= system1 || f >= system1 || g >= system1 || h >= system1) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		cout << "Введите систему числение в которую вы хотите перевисти: ";
		cin >> system2;



		if (system1 >= 2 && system1 != 10 && system1 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo <= 9) n == 1;
			else if (chislo <= 99) n = 2;
			else if (chislo <= 999) n = 3;
			else if (chislo <= 9999) n = 4;
			else if (chislo <= 99999) n = 5;
			else if (chislo <= 999999) n = 6;
			else if (chislo <= 9999999) n = 7;
			else if (chislo <= 99999999) n = 8;
			else if (chislo <= 999999999) n = 9;
			else if (chislo <= 2000000000) n = 10;

			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;

			if (a > 0)
			{
				otvet = a * pow(system1, n - 1) + b * pow(system1, n - 2) + c * pow(system1, n - 3) + d * pow(system1, n - 4) + e * pow(system1, n - 5) + f * pow(system1, n - 6) + g * pow(system1, n - 7) + h * pow(system1, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet = b * pow(system1, n - 1) + c * pow(system1, n - 2) + d * pow(system1, n - 3) + e * pow(system1, n - 4) + f * pow(system1, n - 5) + g * pow(system1, n - 6) + h * pow(system1, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet = c * pow(system1, n - 1) + d * pow(system1, n - 2) + e * pow(system1, n - 3) + f * pow(system1, n - 4) + g * pow(system1, n - 5) + h * pow(system1, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet = d * pow(system1, n - 1) + e * pow(system1, n - 2) + f * pow(system1, n - 3) + g * pow(system1, n - 4) + h * pow(system1, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet = e * pow(system1, n - 1) + f * pow(system1, n - 2) + g * pow(system1, n - 3) + h * pow(system1, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet = f * pow(system1, n - 1) + g * pow(system1, n - 2) + h * pow(system1, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet = g * pow(system1, n - 1) + h * pow(system1, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet = h * pow(system1, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet = chislo;

		}





		if (otvet >= system2)
		{
			int a, b, c, d, e, f, g, h;
			int a1, b1, c1, d1, e1, f1, g1, h1;
			a = otvet / system2;
			a1 = otvet % system2;

			b = a / system2;
			b1 = a % system2;

			c = b / system2;
			c1 = b % system2;

			d = c / system2;
			d1 = c % system2;

			e = d / system2;
			e1 = d % system2;

			f = e / system2;
			f1 = e % system2;

			g = f / system2;
			g1 = f % system2;

			h = g / system2;
			h1 = g % system2;
			if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0 && c1 == 0 && b1 == 0)
			{
				cout << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0 && c1 == 0)
			{
				cout << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0)
			{
				cout << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0)
			{
				cout << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0)
			{
				cout << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0)
			{
				cout << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0)
			{
				cout << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}


		} break;

	case 2:

		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число 1 : ";
			cin >> chislo;
			cout << "Введите систему числение числа: ";
			cin >> system1;
			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;
			if (a >= system1 || b >= system1 || c >= system1 || d >= system1 || e >= system1 || f >= system1 || g >= system1 || h >= system1) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число 2: ";
			cin >> chislo1;
			cout << "Введите систему числение числа: ";
			cin >> system3;
			a = chislo1 / 10000000;
			b = (chislo1 % 10000000) / 1000000;
			c = (chislo1 % 1000000) / 100000;
			d = (chislo1 % 100000) / 10000;
			e = (chislo1 % 10000) / 1000;
			f = (chislo1 % 1000) / 100;
			g = (chislo1 % 100) / 10;
			h = chislo1 % 10;
			if (a >= system3 || b >= system3 || c >= system3 || d >= system3 || e >= system3 || f >= system3 || g >= system3 || h >= system3) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		cout << "Введите систему числение в которую вы хотите перевисти: ";
		cin >> system2;



		if (system1 >= 2 && system1 != 10 && system1 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo <= 9) n == 1;
			else if (chislo <= 99) n = 2;
			else if (chislo <= 999) n = 3;
			else if (chislo <= 9999) n = 4;
			else if (chislo <= 99999) n = 5;
			else if (chislo <= 999999) n = 6;
			else if (chislo <= 9999999) n = 7;
			else if (chislo <= 99999999) n = 8;
			else if (chislo <= 999999999) n = 9;
			else if (chislo <= 2000000000) n = 10;

			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;

			if (a > 0)
			{
				otvet = a * pow(system1, n - 1) + b * pow(system1, n - 2) + c * pow(system1, n - 3) + d * pow(system1, n - 4) + e * pow(system1, n - 5) + f * pow(system1, n - 6) + g * pow(system1, n - 7) + h * pow(system1, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet = b * pow(system1, n - 1) + c * pow(system1, n - 2) + d * pow(system1, n - 3) + e * pow(system1, n - 4) + f * pow(system1, n - 5) + g * pow(system1, n - 6) + h * pow(system1, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet = c * pow(system1, n - 1) + d * pow(system1, n - 2) + e * pow(system1, n - 3) + f * pow(system1, n - 4) + g * pow(system1, n - 5) + h * pow(system1, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet = d * pow(system1, n - 1) + e * pow(system1, n - 2) + f * pow(system1, n - 3) + g * pow(system1, n - 4) + h * pow(system1, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet = e * pow(system1, n - 1) + f * pow(system1, n - 2) + g * pow(system1, n - 3) + h * pow(system1, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet = f * pow(system1, n - 1) + g * pow(system1, n - 2) + h * pow(system1, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet = g * pow(system1, n - 1) + h * pow(system1, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet = h * pow(system1, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet = chislo;

		}
		//end1
		if (system3 >= 2 && system3 != 10 && system3 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo1 <= 9) n == 1;
			else if (chislo1 <= 99) n = 2;
			else if (chislo1 <= 999) n = 3;
			else if (chislo1 <= 9999) n = 4;
			else if (chislo1 <= 99999) n = 5;
			else if (chislo1 <= 999999) n = 6;
			else if (chislo1 <= 9999999) n = 7;
			else if (chislo1 <= 99999999) n = 8;
			else if (chislo1 <= 999999999) n = 9;
			else if (chislo1 <= 2000000000) n = 10;

			a = chislo1 / 10000000;
			b = (chislo1 % 10000000) / 1000000;
			c = (chislo1 % 1000000) / 100000;
			d = (chislo1 % 100000) / 10000;
			e = (chislo1 % 10000) / 1000;
			f = (chislo1 % 1000) / 100;
			g = (chislo1 % 100) / 10;
			h = chislo1 % 10;

			if (a > 0)
			{
				otvet1 = a * pow(system3, n - 1) + b * pow(system3, n - 2) + c * pow(system3, n - 3) + d * pow(system3, n - 4) + e * pow(system3, n - 5) + f * pow(system3, n - 6) + g * pow(system3, n - 7) + h * pow(system3, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet1 = b * pow(system3, n - 1) + c * pow(system3, n - 2) + d * pow(system3, n - 3) + e * pow(system3, n - 4) + f * pow(system3, n - 5) + g * pow(system3, n - 6) + h * pow(system3, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet1 = c * pow(system3, n - 1) + d * pow(system3, n - 2) + e * pow(system3, n - 3) + f * pow(system3, n - 4) + g * pow(system3, n - 5) + h * pow(system3, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet1 = d * pow(system3, n - 1) + e * pow(system3, n - 2) + f * pow(system3, n - 3) + g * pow(system3, n - 4) + h * pow(system3, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet1 = e * pow(system3, n - 1) + f * pow(system3, n - 2) + g * pow(system3, n - 3) + h * pow(system3, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet1 = f * pow(system3, n - 1) + g * pow(system3, n - 2) + h * pow(system3, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet1 = g * pow(system3, n - 1) + h * pow(system3, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet1 = h * pow(system3, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet1 = chislo1;

		}

		//end2

		rez = otvet1 + otvet;

		if (rez >= system2)
		{
			int a, b, c, d, e, f, g, h;
			int a1, b1, c1, d1, e1, f1, g1, h1;
			a = rez / system2;
			a1 = rez % system2;

			b = a / system2;
			b1 = a % system2;

			c = b / system2;
			c1 = b % system2;

			d = c / system2;
			d1 = c % system2;

			e = d / system2;
			e1 = d % system2;

			f = e / system2;
			f1 = e % system2;

			g = f / system2;
			g1 = f % system2;

			h = g / system2;
			h1 = g % system2;
			if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0 && c1 == 0 && b1 == 0)
			{
				cout << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0 && c1 == 0)
			{
				cout << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0)
			{
				cout << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0)
			{
				cout << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0)
			{
				cout << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0)
			{
				cout << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0)
			{
				cout << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}


		} break;

	case 3:
		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число 1: ";
			cin >> chislo;
			cout << "Введите систему числение числа: ";
			cin >> system1;
			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;
			if (a >= system1 || b >= system1 || c >= system1 || d >= system1 || e >= system1 || f >= system1 || g >= system1 || h >= system1) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число 2: ";
			cin >> chislo1;
			cout << "Введите систему числение числа: ";
			cin >> system3;
			a = chislo1 / 10000000;
			b = (chislo1 % 10000000) / 1000000;
			c = (chislo1 % 1000000) / 100000;
			d = (chislo1 % 100000) / 10000;
			e = (chislo1 % 10000) / 1000;
			f = (chislo1 % 1000) / 100;
			g = (chislo1 % 100) / 10;
			h = chislo1 % 10;
			if (a >= system3 || b >= system3 || c >= system3 || d >= system3 || e >= system3 || f >= system3 || g >= system3 || h >= system3) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		cout << "Введите систему: ";
		cin >> system2;



		if (system1 >= 2 && system1 != 10 && system1 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo <= 9) n == 1;
			else if (chislo <= 99) n = 2;
			else if (chislo <= 999) n = 3;
			else if (chislo <= 9999) n = 4;
			else if (chislo <= 99999) n = 5;
			else if (chislo <= 999999) n = 6;
			else if (chislo <= 9999999) n = 7;
			else if (chislo <= 99999999) n = 8;
			else if (chislo <= 999999999) n = 9;
			else if (chislo <= 2000000000) n = 10;

			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;

			if (a > 0)
			{
				otvet = a * pow(system1, n - 1) + b * pow(system1, n - 2) + c * pow(system1, n - 3) + d * pow(system1, n - 4) + e * pow(system1, n - 5) + f * pow(system1, n - 6) + g * pow(system1, n - 7) + h * pow(system1, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet = b * pow(system1, n - 1) + c * pow(system1, n - 2) + d * pow(system1, n - 3) + e * pow(system1, n - 4) + f * pow(system1, n - 5) + g * pow(system1, n - 6) + h * pow(system1, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet = c * pow(system1, n - 1) + d * pow(system1, n - 2) + e * pow(system1, n - 3) + f * pow(system1, n - 4) + g * pow(system1, n - 5) + h * pow(system1, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet = d * pow(system1, n - 1) + e * pow(system1, n - 2) + f * pow(system1, n - 3) + g * pow(system1, n - 4) + h * pow(system1, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet = e * pow(system1, n - 1) + f * pow(system1, n - 2) + g * pow(system1, n - 3) + h * pow(system1, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet = f * pow(system1, n - 1) + g * pow(system1, n - 2) + h * pow(system1, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet = g * pow(system1, n - 1) + h * pow(system1, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet = h * pow(system1, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet = chislo;

		}
		//end1
		if (system3 >= 2 && system3 != 10 && system3 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo1 <= 9) n == 1;
			else if (chislo1 <= 99) n = 2;
			else if (chislo1 <= 999) n = 3;
			else if (chislo1 <= 9999) n = 4;
			else if (chislo1 <= 99999) n = 5;
			else if (chislo1 <= 999999) n = 6;
			else if (chislo1 <= 9999999) n = 7;
			else if (chislo1 <= 99999999) n = 8;
			else if (chislo1 <= 999999999) n = 9;
			else if (chislo1 <= 2000000000) n = 10;

			a = chislo1 / 10000000;
			b = (chislo1 % 10000000) / 1000000;
			c = (chislo1 % 1000000) / 100000;
			d = (chislo1 % 100000) / 10000;
			e = (chislo1 % 10000) / 1000;
			f = (chislo1 % 1000) / 100;
			g = (chislo1 % 100) / 10;
			h = chislo1 % 10;

			if (a > 0)
			{
				otvet1 = a * pow(system3, n - 1) + b * pow(system3, n - 2) + c * pow(system3, n - 3) + d * pow(system3, n - 4) + e * pow(system3, n - 5) + f * pow(system3, n - 6) + g * pow(system3, n - 7) + h * pow(system3, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet1 = b * pow(system3, n - 1) + c * pow(system3, n - 2) + d * pow(system3, n - 3) + e * pow(system3, n - 4) + f * pow(system3, n - 5) + g * pow(system3, n - 6) + h * pow(system3, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet1 = c * pow(system3, n - 1) + d * pow(system3, n - 2) + e * pow(system3, n - 3) + f * pow(system3, n - 4) + g * pow(system3, n - 5) + h * pow(system3, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet1 = d * pow(system3, n - 1) + e * pow(system3, n - 2) + f * pow(system3, n - 3) + g * pow(system3, n - 4) + h * pow(system3, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet1 = e * pow(system3, n - 1) + f * pow(system3, n - 2) + g * pow(system3, n - 3) + h * pow(system3, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet1 = f * pow(system3, n - 1) + g * pow(system3, n - 2) + h * pow(system3, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet1 = g * pow(system3, n - 1) + h * pow(system3, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet1 = h * pow(system3, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet1 = chislo1;

		}

		//end2

		rez = otvet - otvet1;

		if (rez >= system2)
		{
			int a, b, c, d, e, f, g, h;
			int a1, b1, c1, d1, e1, f1, g1, h1;
			a = rez / system2;
			a1 = rez % system2;

			b = a / system2;
			b1 = a % system2;

			c = b / system2;
			c1 = b % system2;

			d = c / system2;
			d1 = c % system2;

			e = d / system2;
			e1 = d % system2;

			f = e / system2;
			f1 = e % system2;

			g = f / system2;
			g1 = f % system2;

			h = g / system2;
			h1 = g % system2;
			if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0 && c1 == 0 && b1 == 0)
			{
				cout << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0 && c1 == 0)
			{
				cout << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0 && d1 == 0)
			{
				cout << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0 && e1 == 0)
			{
				cout << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0 && f1 == 0)
			{
				cout << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && g1 == 0)
			{
				cout << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0)
			{
				cout << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}


		} break;

	case 4:
		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число 1: ";
			cin >> chislo;
			cout << "Введите систему числение числа: ";
			cin >> system1;
			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;
			if (a >= system1 || b >= system1 || c >= system1 || d >= system1 || e >= system1 || f >= system1 || g >= system1 || h >= system1) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число 2: ";
			cin >> chislo1;
			cout << "Введите систему числение числа: ";
			cin >> system3;
			a = chislo1 / 10000000;
			b = (chislo1 % 10000000) / 1000000;
			c = (chislo1 % 1000000) / 100000;
			d = (chislo1 % 100000) / 10000;
			e = (chislo1 % 10000) / 1000;
			f = (chislo1 % 1000) / 100;
			g = (chislo1 % 100) / 10;
			h = chislo1 % 10;
			if (a >= system3 || b >= system3 || c >= system3 || d >= system3 || e >= system3 || f >= system3 || g >= system3 || h >= system3) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		cout << "Введите систему числение в которую вы хотите перевисти: ";
		cin >> system2;



		if (system1 >= 2 && system1 != 10 && system1 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo <= 9) n == 1;
			else if (chislo <= 99) n = 2;
			else if (chislo <= 999) n = 3;
			else if (chislo <= 9999) n = 4;
			else if (chislo <= 99999) n = 5;
			else if (chislo <= 999999) n = 6;
			else if (chislo <= 9999999) n = 7;
			else if (chislo <= 99999999) n = 8;
			else if (chislo <= 999999999) n = 9;
			else if (chislo <= 2000000000) n = 10;

			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;

			if (a > 0)
			{
				otvet = a * pow(system1, n - 1) + b * pow(system1, n - 2) + c * pow(system1, n - 3) + d * pow(system1, n - 4) + e * pow(system1, n - 5) + f * pow(system1, n - 6) + g * pow(system1, n - 7) + h * pow(system1, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet = b * pow(system1, n - 1) + c * pow(system1, n - 2) + d * pow(system1, n - 3) + e * pow(system1, n - 4) + f * pow(system1, n - 5) + g * pow(system1, n - 6) + h * pow(system1, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet = c * pow(system1, n - 1) + d * pow(system1, n - 2) + e * pow(system1, n - 3) + f * pow(system1, n - 4) + g * pow(system1, n - 5) + h * pow(system1, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet = d * pow(system1, n - 1) + e * pow(system1, n - 2) + f * pow(system1, n - 3) + g * pow(system1, n - 4) + h * pow(system1, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet = e * pow(system1, n - 1) + f * pow(system1, n - 2) + g * pow(system1, n - 3) + h * pow(system1, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet = f * pow(system1, n - 1) + g * pow(system1, n - 2) + h * pow(system1, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet = g * pow(system1, n - 1) + h * pow(system1, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet = h * pow(system1, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet = chislo;

		}
		//end1
		if (system3 >= 2 && system3 != 10 && system3 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo1 <= 9) n == 1;
			else if (chislo1 <= 99) n = 2;
			else if (chislo1 <= 999) n = 3;
			else if (chislo1 <= 9999) n = 4;
			else if (chislo1 <= 99999) n = 5;
			else if (chislo1 <= 999999) n = 6;
			else if (chislo1 <= 9999999) n = 7;
			else if (chislo1 <= 99999999) n = 8;
			else if (chislo1 <= 999999999) n = 9;
			else if (chislo1 <= 2000000000) n = 10;

			a = chislo1 / 10000000;
			b = (chislo1 % 10000000) / 1000000;
			c = (chislo1 % 1000000) / 100000;
			d = (chislo1 % 100000) / 10000;
			e = (chislo1 % 10000) / 1000;
			f = (chislo1 % 1000) / 100;
			g = (chislo1 % 100) / 10;
			h = chislo1 % 10;

			if (a > 0)
			{
				otvet1 = a * pow(system3, n - 1) + b * pow(system3, n - 2) + c * pow(system3, n - 3) + d * pow(system3, n - 4) + e * pow(system3, n - 5) + f * pow(system3, n - 6) + g * pow(system3, n - 7) + h * pow(system3, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet1 = b * pow(system3, n - 1) + c * pow(system3, n - 2) + d * pow(system3, n - 3) + e * pow(system3, n - 4) + f * pow(system3, n - 5) + g * pow(system3, n - 6) + h * pow(system3, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet1 = c * pow(system3, n - 1) + d * pow(system3, n - 2) + e * pow(system3, n - 3) + f * pow(system3, n - 4) + g * pow(system3, n - 5) + h * pow(system3, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet1 = d * pow(system3, n - 1) + e * pow(system3, n - 2) + f * pow(system3, n - 3) + g * pow(system3, n - 4) + h * pow(system3, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet1 = e * pow(system3, n - 1) + f * pow(system3, n - 2) + g * pow(system3, n - 3) + h * pow(system3, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet1 = f * pow(system3, n - 1) + g * pow(system3, n - 2) + h * pow(system3, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet1 = g * pow(system3, n - 1) + h * pow(system3, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet1 = h * pow(system3, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet1 = chislo1;

		}

		//end2

		rez = otvet * otvet1;

		if (rez >= system2)
		{
			int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u;
			int a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1;

			a = rez / system2;
			a1 = rez % system2;

			b = a / system2;
			b1 = a % system2;

			c = b / system2;
			c1 = b % system2;

			d = c / system2;
			d1 = c % system2;

			e = d / system2;
			e1 = d % system2;

			f = e / system2;
			f1 = e % system2;

			g = f / system2;
			g1 = f % system2;

			h = g / system2;
			h1 = g % system2;

			i = h / system2;
			i1 = h % system2;

			j = i / system2;
			j1 = i % system2;

			k = j / system2;
			k1 = j % system2;

			l = k / system2;
			l1 = k % system2;

			m = l / system2;
			m1 = l % system2;

			n = m / system2;
			n1 = m / system2;

			o = n / system2;
			o1 = n / system2;

			p = o / system2;
			p1 = o / system2;

			q = p / system2;
			q1 = p / system2;

			r = q / system2;
			r1 = q / system2;

			s = r / system2;
			s1 = r / system2;

			t = s / system2;
			t1 = s / system2;

			u = t / system2;
			u1 = t / system2;

			if (b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0) {
				cout << a1 << endl;
			}

			else if (c1 == 0 && d1 == 0 && e1 == 0 && f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << b1 << a1 << endl;
			}
			else if (d1 == 0 && e1 == 0 && f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << c1 << b1 << a1 << endl;
			}
			else if (e1 == 0 && f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << d1 << c1 << b1 << a1 << endl;
			}
			else if (f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)

			{
				cout << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)

			{
				cout << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << q1 << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << r1 << q1 << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (t1 == 0 && u1 == 0)
			{
				cout << s1 << r1 << q1 << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (u1 == 0)
			{
				cout << t1 << s1 << r1 << q1 << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}




		}break;

	case 5:
		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число 1: ";
			cin >> chislo;
			cout << "Введите систему числение числа: ";
			cin >> system1;
			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;
			if (a >= system1 || b >= system1 || c >= system1 || d >= system1 || e >= system1 || f >= system1 || g >= system1 || h >= system1) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		for (;;) {
			int a, b, c, d, e, f, g, h;
			cout << "Введите число 2: ";
			cin >> chislo1;
			cout << "Введите систему числение числа: ";
			cin >> system3;
			a = chislo1 / 10000000;
			b = (chislo1 % 10000000) / 1000000;
			c = (chislo1 % 1000000) / 100000;
			d = (chislo1 % 100000) / 10000;
			e = (chislo1 % 10000) / 1000;
			f = (chislo1 % 1000) / 100;
			g = (chislo1 % 100) / 10;
			h = chislo1 % 10;
			if (a >= system3 || b >= system3 || c >= system3 || d >= system3 || e >= system3 || f >= system3 || g >= system3 || h >= system3) {
				cout << "Неправильный ввод\n";
			}
			else {
				break;
			}
		}
		cout << "Введите систему числение в которую вы хотите перевисти: ";
		cin >> system2;



		if (system1 >= 2 && system1 != 10 && system1 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo <= 9) n == 1;
			else if (chislo <= 99) n = 2;
			else if (chislo <= 999) n = 3;
			else if (chislo <= 9999) n = 4;
			else if (chislo <= 99999) n = 5;
			else if (chislo <= 999999) n = 6;
			else if (chislo <= 9999999) n = 7;
			else if (chislo <= 99999999) n = 8;
			else if (chislo <= 999999999) n = 9;
			else if (chislo <= 2000000000) n = 10;

			a = chislo / 10000000;
			b = (chislo % 10000000) / 1000000;
			c = (chislo % 1000000) / 100000;
			d = (chislo % 100000) / 10000;
			e = (chislo % 10000) / 1000;
			f = (chislo % 1000) / 100;
			g = (chislo % 100) / 10;
			h = chislo % 10;

			if (a > 0)
			{
				otvet = a * pow(system1, n - 1) + b * pow(system1, n - 2) + c * pow(system1, n - 3) + d * pow(system1, n - 4) + e * pow(system1, n - 5) + f * pow(system1, n - 6) + g * pow(system1, n - 7) + h * pow(system1, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet = b * pow(system1, n - 1) + c * pow(system1, n - 2) + d * pow(system1, n - 3) + e * pow(system1, n - 4) + f * pow(system1, n - 5) + g * pow(system1, n - 6) + h * pow(system1, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet = c * pow(system1, n - 1) + d * pow(system1, n - 2) + e * pow(system1, n - 3) + f * pow(system1, n - 4) + g * pow(system1, n - 5) + h * pow(system1, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet = d * pow(system1, n - 1) + e * pow(system1, n - 2) + f * pow(system1, n - 3) + g * pow(system1, n - 4) + h * pow(system1, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet = e * pow(system1, n - 1) + f * pow(system1, n - 2) + g * pow(system1, n - 3) + h * pow(system1, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet = f * pow(system1, n - 1) + g * pow(system1, n - 2) + h * pow(system1, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet = g * pow(system1, n - 1) + h * pow(system1, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet = h * pow(system1, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet = chislo;

		}
		//end1
		if (system3 >= 2 && system3 != 10 && system3 <= 16)
		{


			int a, b, c, d, e, f, g, h;


			if (chislo1 <= 9) n == 1;
			else if (chislo1 <= 99) n = 2;
			else if (chislo1 <= 999) n = 3;
			else if (chislo1 <= 9999) n = 4;
			else if (chislo1 <= 99999) n = 5;
			else if (chislo1 <= 999999) n = 6;
			else if (chislo1 <= 9999999) n = 7;
			else if (chislo1 <= 99999999) n = 8;
			else if (chislo1 <= 999999999) n = 9;
			else if (chislo1 <= 2000000000) n = 10;

			a = chislo1 / 10000000;
			b = (chislo1 % 10000000) / 1000000;
			c = (chislo1 % 1000000) / 100000;
			d = (chislo1 % 100000) / 10000;
			e = (chislo1 % 10000) / 1000;
			f = (chislo1 % 1000) / 100;
			g = (chislo1 % 100) / 10;
			h = chislo1 % 10;

			if (a > 0)
			{
				otvet1 = a * pow(system3, n - 1) + b * pow(system3, n - 2) + c * pow(system3, n - 3) + d * pow(system3, n - 4) + e * pow(system3, n - 5) + f * pow(system3, n - 6) + g * pow(system3, n - 7) + h * pow(system3, n - 8);

			}


			if (a == 0 && b > 0)
			{
				otvet1 = b * pow(system3, n - 1) + c * pow(system3, n - 2) + d * pow(system3, n - 3) + e * pow(system3, n - 4) + f * pow(system3, n - 5) + g * pow(system3, n - 6) + h * pow(system3, n - 7);

			}

			if (a == 0 && b == 0 && c > 0)
			{
				otvet1 = c * pow(system3, n - 1) + d * pow(system3, n - 2) + e * pow(system3, n - 3) + f * pow(system3, n - 4) + g * pow(system3, n - 5) + h * pow(system3, n - 6);

			}

			if (a == 0 && b == 0 && c == 0 && d > 0)
			{
				otvet1 = d * pow(system3, n - 1) + e * pow(system3, n - 2) + f * pow(system3, n - 3) + g * pow(system3, n - 4) + h * pow(system3, n - 5);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e > 0)
			{
				otvet1 = e * pow(system3, n - 1) + f * pow(system3, n - 2) + g * pow(system3, n - 3) + h * pow(system3, n - 4);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f > 0)
			{
				otvet1 = f * pow(system3, n - 1) + g * pow(system3, n - 2) + h * pow(system3, n - 3);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g > 0)
			{
				otvet1 = g * pow(system3, n - 1) + h * pow(system3, n - 2);

			}

			if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h > 0)
			{
				otvet1 = h * pow(system3, n - 1);

			}


		}
		else if (system1 == 10)
		{
			otvet1 = chislo1;
			cout << otvet1;
		}

		//end2
		if (otvet < otvet1) {
			cout << "Ошибка";
		}
		rez = otvet / otvet1;

		if (rez > system2)
		{
			int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u;
			int a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1;

			a = rez / system2;
			a1 = rez % system2;

			b = a / system2;
			b1 = a % system2;

			c = b / system2;
			c1 = b % system2;

			d = c / system2;
			d1 = c % system2;

			e = d / system2;
			e1 = d % system2;

			f = e / system2;
			f1 = e % system2;

			g = f / system2;
			g1 = f % system2;

			h = g / system2;
			h1 = g % system2;

			i = h / system2;
			i1 = h % system2;

			j = i / system2;
			j1 = i % system2;

			k = j / system2;
			k1 = j % system2;

			l = k / system2;
			l1 = k % system2;

			m = l / system2;
			m1 = l % system2;

			n = m / system2;
			n1 = m / system2;

			o = n / system2;
			o1 = n / system2;

			p = o / system2;
			p1 = o / system2;

			q = p / system2;
			q1 = p / system2;

			r = q / system2;
			r1 = q / system2;

			s = r / system2;
			s1 = r / system2;

			t = s / system2;
			t1 = s / system2;

			u = t / system2;
			u1 = t / system2;

			if (b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0) {
				cout << a1 << endl;
			}

			else if (c1 == 0 && d1 == 0 && e1 == 0 && f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << b1 << a1 << endl;
			}
			else if (d1 == 0 && e1 == 0 && f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << c1 << b1 << a1 << endl;
			}
			else if (e1 == 0 && f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << d1 << c1 << b1 << a1 << endl;
			}
			else if (f1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (g1 == 0 && h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)

			{
				cout << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (h1 == 0 && i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)

			{
				cout << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (i1 == 0 && j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (j1 == 0 && k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (k1 == 0 && l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (l1 == 0 && m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (m1 == 0 && n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (n1 == 0 && o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (o1 == 0 && p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (p1 == 0 && q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (q1 == 0 && r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (r1 == 0 && s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << q1 << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (s1 == 0 && t1 == 0 && u1 == 0)
			{
				cout << r1 << q1 << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (t1 == 0 && u1 == 0)
			{
				cout << s1 << r1 << q1 << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}
			else if (u1 == 0)
			{
				cout << t1 << s1 << r1 << q1 << p1 << o1 << n1 << m1 << l1 << k1 << j1 << i1 << h1 << g1 << f1 << e1 << d1 << c1 << b1 << a1 << endl;
			}


		} break;

	}

	system("pause");

	return 0;
}