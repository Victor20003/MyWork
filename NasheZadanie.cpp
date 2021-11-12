#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(0, "");

	cout << "Welcome to the MyCalculator" << endl;
	cout << "\nВведите первое значение: ";
	double num1;
	cin >> num1;
	cout << "\nВведите второе значение: ";
	double num2;
	cin >> num2;
	cout << "\n\nСписок операций: \n\n[1] Вычитание \n[2] Сложение \n[3] Умножение \n[4] Деление" << endl;
	cout << "Выберите операцию: ";

	int menu;
	cin >> menu;

	cout << "Результат: ";

	double result;



	switch (menu) {
	case 1:
		result = num1 - num2;
		cout << num1 - num2 << endl;
		Sleep(2000);
		system("cls");
		main();
		break;
	case 2:
		result = num1 + num2;
		cout << result << endl;
		Sleep(2000);
		system("cls");
		main();
		break;
	case 3:
		result = num1 * num2;
		cout << result << endl;
		Sleep(2000);
		system("cls");
		main();
		break;
	case 4:
		result = num1 / num2;
		cout << result << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	default:
		cout << "Приятель, ты что-то написал не так, как надо. Будь добр исправить это." << endl;
		Sleep(2000);
		system("cls");
		main();
		break;
	}

	return 0;
}