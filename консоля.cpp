#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int hour, i = 0;

	cout << "Задание 1. Кукушка" << endl;
	cout << "Условие:" << endl;
	cout << "Прграмма работает при том условии, что время будет вводиться в 24-х часовом формате," << endl
		<< "где счет начинается с 1, а 24 является полночью (эквивалентом 00:00)" << endl << endl;

	

	
		cout << "Введите, который час: ";
		cin >> hour;

		if (hour < 1 || hour > 24) {
			cout << "Ошибка ввода. Попробуйте еще раз." << endl << endl;
			cout << "-----------------------" << endl << endl;
		}
		else {
			while (i < hour) {
				cout << "Ку-ку" << endl;
				++i;

			}
		}
		i = 0;
	
}