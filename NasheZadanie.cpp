#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(0, "");

	cout << "Welcome to the MyCalculator" << endl;
	cout << "\n������� ������ ��������: ";
	double num1;
	cin >> num1;
	cout << "\n������� ������ ��������: ";
	double num2;
	cin >> num2;
	cout << "\n\n������ ��������: \n\n[1] ��������� \n[2] �������� \n[3] ��������� \n[4] �������" << endl;
	cout << "�������� ��������: ";

	int menu;
	cin >> menu;

	cout << "���������: ";

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
		cout << "��������, �� ���-�� ������� �� ���, ��� ����. ���� ���� ��������� ���." << endl;
		Sleep(2000);
		system("cls");
		main();
		break;
	}

	return 0;
}