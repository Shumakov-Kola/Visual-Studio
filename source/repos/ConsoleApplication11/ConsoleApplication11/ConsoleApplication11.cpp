




#include <iostream>

using namespace std;

int get_move() {
	setlocale(LC_ALL, "ru");
	cout << "Опции:  " << endl;
	cout << "-7-|-8-|-9-" << endl;
	cout << "-4-|-5-|-6-" << endl;
	cout << "-1-|-2-|-3-" << endl;
	cout << endl << endl;

	cout << "Игровая доска:  " << endl;
	cout << "***|***|***" << endl;
	cout << "***|***|***" << endl;
	cout << "***|***|***" << endl;
	cout << endl << "Ваш ход ";


	int move;
	cin >> move;



	while (move > 9 || move < 1) {
		cout << "Введите 1-9: ";
		cin >> move;

	}
	return move;
}

int main()
{
	
	int move = get_move();

	cout << "Вы ввели: " << move << endl;

	return 0;


}

	



