#include <iostream>
#include <Windows.h>
#define clear system("cls");

using namespace std;



void Linia() {
	setlocale(0, "");

	int gg = 0;

	cout << "Выберите длину линии: \n";
	int kk1;
	cin >> kk1;
	cout << "Выберите символ линии: \n";
	char gege;
	cin >> gege;
	cout << "Результат процесса собирания: \n";

	while (gg < kk1) {


		cout << gege;
		gg++;




	}
}
void LiniaVertikal() {

	setlocale(0, "");

	int gg2 = 0;

	cout << "Выберите длину линии: \n";
	int kk2;
	cin >> kk2;
	cout << "Выберите символ линии: \n";
	char hihi;
	cin >> hihi;
	cout << "Результат процесса: \n";

	while (gg2 < kk2) {

		cout << gg2;




	}
}


		int figurochkidlyaLinii() {
			setlocale(0, "");
			clear;
			cout << "[+] Фигура:Линия\n\n";
				cout << "[+] Выберите тип линии: \n[1] Горизонтальная\n [2] Вертикальная\n";
			cout << "[+] Выберите тип линии: ";

			int tiplinii;
			cin >> tiplinii;

			if (tiplinii == 1) {
				Linia();
			}
			else if (tiplinii == 2) {
				LiniaVertikal();
			}
			else {
				cout << "\n[-] Данного типа просто не существует, так что выпей таблетки от шизы и напиши нормально";
				Sleep(2000);
				clear;
				figurochkidlyaLinii();
			}
		}



int main() {
	setlocale(0, "");

	cout << "Программа: Геометрические фигуры\n\n";
	cout << "Список фигур: [1] Линия\n\n";
	cout << "Выберите фигуру: ";
	int menu;
	cin >> menu;

	int lineechka;
	cin >> lineechka;

	if (lineechka == 1) {
		figurochkidlyaLinii();
	}
	else {
		cout << "\n[-]Такой фигуры не существует";
		Sleep(1000);
		clear;
		main();
	}


}








   