#include <iostream>
#include <Windows.h>


using namespace std;

int main() {

	setlocale(0, "");
	system("color 0c");

	cout << "[-]Cписки слов в переводчике: \n[1] Русские слова\n[2] Английские слова.\n" << endl;
	cout << "Введите значения: ";
	int menu;
	cin >> menu;

	switch (menu) {
	case 1:

		system("color 0c");
		cout << "[-] Список русских слов: \n[1] Еда\n[2] Игры\n[3] Каша\n[4] Развлечения\n[5] Алкоголь\n[6] Сигареты\n[7] Игроманы\n[8] Чай\n[9] Чаепитие\n[10] Алкоголераспитие\n[11] Функции\n[12] Когнитивность\n[13] Логика\n[14] Метаморфоза\n[15] Митохондрии\n";
		break;
	case 2:
		system("color 0c");
		cout << "[-] Список английских слов: \n[1] Food \n[2] Games \n[3] Porridge \n[4] Entertainment \n[5] Alcohol \n[6] Cigarettes \n[7] Gambling addicts \n[8] Tea \n[9] Tea drinking \n[10] Alcohol drinking \n[11] Functions \n[12] Cognitiveness \n[13 ] Logic \n[14] Metamorphosis \n[15] Mitochondria ";
		break;

	default:
		system("color 0c");
		cout << "Введены неверные значения" << endl << endl;
		main();
		break;

	}
	cout << "Выберите слово: ";
	int menushka2;
	cin >> menushka2;

	switch (menushka2) {

	case 1:

		cout << "[Перевод] Еда ----> Food" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 2:

		cout << "[Перевод] Игры ----> Games" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 3:

		cout << "[Перевод] Каша ----> Porridge" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 4:
		cout << "[Перевод] Развлечения ----> Entertainment" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 5:
		cout << "[Перевод] Алкоголь ----> Alcohol" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 6:

		cout << "[Перевод] Сигареты ----> Cigarettes" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 7:

		cout << "[Перевод] Игроманы ----> Gambling addicts" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 8:

		cout << "[Перевод] Чай ----> Tea" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 9:

		cout << "[Перевод] Чаераспитие ----> Teadrinking" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 10:

		cout << "[Перевод] Алкоголераспитие ----> Alcoholdrinking" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 11:

		cout << "[Перевод] Функции ----> Function" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 12:

		cout << "[Перевод] Когнитивность ----> Cognitiveness" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 13:

		cout << "[Перевод] Логика ----> Logic" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 14:

		cout << "[Перевод] Метаморфозы ----> Metamorphosis" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 15:

		cout << "[Перевод] Митохондрии ----> Mitochondria" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	default:

		cout << "Введено неправильное значение ";


	}

	int menushka3;
	cin >> menushka3;

	switch (menushka3) {


	case 1:

		cout << "[Перевод] Food ----> Еда" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 2:

		cout << "[Перевод] Games ----> Игры" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 3:

		cout << "[Перевод] Porridge ----> Каша" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 4:
		cout << "[Перевод] Entertainment ----> Развлечения" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 5:
		cout << "[Перевод] Alcohol ----> Алкоголь" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 6:

		cout << "[Перевод] Cigarettes ----> Сигареты" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 7:

		cout << "[Перевод] Gambling addicts ----> Игроманы" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 8:

		cout << "[Перевод] Tea ----> Чай" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 9:

		cout << "[Перевод] Teadrinking ----> Чаепитие" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 10:

		cout << "[Перевод] Alcoholdrinking ----> Алкоголераспитие" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 11:

		cout << "[Перевод] Function ----> Функции" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 12:

		cout << "[Перевод] Cognitiveness ----> Когнитивность" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 13:

		cout << "[Перевод] Logic ----> Логика" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 14:

		cout << "[Перевод] Metamorphosis ----> Метоморфозы" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	case 15:

		cout << "[Перевод] Mitochondria ----> Митохондрии" << endl;
		Sleep(2000);
		system("cls");
		main();
		break;

	default:

		cout << "Введено неправильное значение ";




	}


	   


	return 0;

}