#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(0, "");
	cout << "Наименование программы: Геометрические фигуры\n\n";
	cout << "Список фигур: [1] Прямоугольник\n\n";
	cout << "[-] Выберите фигуру: ";

	int figure;
	cin >> figure;

	switch (figure) {

	case 1:

		cout << "Выберите число строк: ";
		int number;
		cin >> number;
		cout << "Выберите символ: ";
		char symbol;
		cin >> symbol;

		int size = 5;


		for (int y = 0; y < size; y++)
		{

			cout << "\t";

			for (int x = 0; x < size; x++)
			{
				if (y == 0 || y == size - 1 || x == size - 1 || x == 0 || y == 2 || y == size - 3 || x == 2 || x == size - 3)
				{
					cout << number << " ";
				}
				else
				{
					cout << "  ";
					break;
				}
			}

			cout << endl;
		}

	}
}


