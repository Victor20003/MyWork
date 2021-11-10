#include <iostream>

using namespace std;

int main() {

	setlocale(0, "");

	cout << "[-] Времена года: \n[1] Январь\n[2] Февраль\n[3] Март\n[4] Апрель\n[5] Май\n[6] Июнь\n[7] Июль\n[8] Август\n[9] Сентябрь\n[10] Октябрь\n[11] Ноябрь\n[12] Декабрь\n" << endl << endl;
	cout << "Выберите одно из времён года: ";
	int menu;
	cin >> menu;


   switch (menu) {

case 1:
	cout << "Выбран январь";
	break;
case 2:
	cout << "Выбран февраль" ;
	break;
case 3: 
	cout << "Выбран март";
	break;
case 4:
	cout << "Выбран апрель";
	break;
case 5:
	cout << "Выбран март";
	break;
case 6:
	cout << "Выбран май";
	break;
case 7:
	cout << "Выбран июнь";
	break;
case 8:
	cout << "Выбран июль";
	break;
case 9:
	cout << "Выбран август";
	break;
case 10:
	cout << "Выбран сентябрь";
	break;
case 11:
	cout << "Выбран ноябрь";
	break;
case 12:
	cout << "Выбран декабрь";
	break;
	
default:
	cout << "Введены неверные значения";
	break;

		}
}

