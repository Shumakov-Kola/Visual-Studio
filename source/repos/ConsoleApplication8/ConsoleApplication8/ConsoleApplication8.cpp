


#include "windows.h"
#include <iostream>

using namespace std;
int main()

{	
	setlocale(LC_ALL, "ru");

	int symbolCount;
	char symbol;
	int lineType;
	int index = 0;
	
	cout << "Введите кол. символов в линии: ";
	cin >> symbolCount;

	cout << "Введите символ: ";
	cin >> symbol;

	cout << "Введити тип линии: " << endl 
			<< "1-Вертикальная линиия" << endl 
			<< "2-Горизонтальная линия" << endl;
	cout << "Введите тип линии: ";
	cin >> lineType;

	if (lineType != 1 && lineType != 2)
	{
		cout << "Некоректный ввод!" << endl;

		return 0;
	}
	if (lineType == 1)
	{
		cout << "Вы ввели вертикальную линию" << endl;
		}
	if (lineType == 2)
	{
		cout << "Вы ввели горизонтальную линию" << endl;
	}
	while (index<symbolCount)
	{	
		if (lineType == 1)
		{	
			
			cout << symbol<<endl;
		}
		if (lineType == 2)
		{	
			
			cout << symbol;
		}
		
		index++;
	}
		
	cout << endl << endl;
	system("pause");
	
}



