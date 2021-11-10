#include <iostream>
#include <windows.h>
#define clear system("cls");
using namespace std;



void Gorizont() {
	setlocale(0, "");

	int j = 0;

	cout << "\n\n [-] Выберите длину линии: ";
	int chislo1;
	cin >> chislo1;
	cout << "\n\n[-] Выберите символ: ";
	char mysymbol;
	cin >> mysymbol;
	cout << "\n\n[-]Результат: \n";


	while (j < chislo1) {

		cout << mysymbol;
		j++;


	}
}

void Vertical() {
	setlocale(0, "");

	int j2 = 0;

	cout << "\n\n[-] Выберите длину линии: ";
	int chislo2;
	cin >> chislo2;
	cout << "\n\n[-] Выберите символ: ";
	char mysymbol2;
	cin >> mysymbol2;
	cout << "\n\n[-] Результат: \n";

	while (j2 < chislo2) {

		cout << mysymbol2 << endl;
		j2++;
	}

}


int main() {
	setlocale(0, "");

	cout << "[-] Название программы: Геометрические фигуры \n\n";
	cout << "[-] Список фигур: \n\n[1] Линия\n\n";
	cout << "[-] Выберите фигуру: ";
	char menu;
	cin >> menu;

	if (menu == '1') {

		cout << "\n\n[-] Выберите тип фигуры: \n\n[1] Горизонтальная \n\n[2] Вертикальная\n\n";
		cout << "Выберите тип: ";
		int liniafig;
		cin >> liniafig;

		if (liniafig == 1) {

			Gorizont();




		}

		else if (liniafig == 2) {

			Vertical();


		}

		else {

			cout << "\n\n[-] Введены неправильные значения выбора";
			Sleep(2000);
			clear;
			main();



		}







	}



	return 0;
}