#include "windows.h"
#include <iostream>
#include "ctime"


using namespace std;


int main()
{
	srand(time(NULL));
	int a;
	cout << "1-Enter yourself" << endl;
	cout << "2-Output random numbers" << endl;
	cout << "Enter action: ";
	cin >> a;
	
		
	if (a == 1) {


		int ar[20];
		for (int i = 0; i < 20; i++)
		{

			cout << "x1[" << i << "]=";

			cin >> ar[i];
		}
		int man = ar[0];

		for (int i = 1; i < 20; i++)
		{
			if (ar[i] < man)
			{
				man = ar[i];
			}
		}

		cout << "Min = " << man << endl;

		long int dob = 1; 
		for (int i = 0; i < 20; i++) {
			if ((i % 2) == 0)
				dob *= ar[i];
		}
		cout << "Dob = " << dob << endl;
	}	 
	
	



	if (a == 2) {
		int a, b;
		int arr[20];


		cout << "Filling the arrey with numbers from: ";
		cin >> b;
		cout << "Filling the arrey with numbers up to: ";
		cin >> a;


		for (int i = 0; i < 20; i++)
		{




			arr[i] = rand() % ((a - b) + 1) + b;
			cout << "x1["<< i << "] = " << arr[i] << endl;
		}
		int min = arr[0];

		for (int i = 1; i < 20; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}

		cout << "Min = " << min << endl;
		long int dob = 1;
		for (int i = 0; i < 20; i++) {
			if ((i % 2) == 0)
				dob *= arr[i];
		}
		cout << "Dob = " << dob << endl;
	}

	if (a<1||a>2) { cout << "Error" << endl; }
		
	system("pause");
}

