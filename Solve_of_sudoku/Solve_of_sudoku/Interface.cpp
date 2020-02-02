#include "Interface.h"

void Interface::SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void Interface::gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Interface::showTable(Field field, int x, int y) {
	SetConsoleCP(866);
	SetConsoleOutputCP(866);

	gotoxy(x, y);
	cout << char(201);
	for (int i = 0; i < 5; i++) cout << char(205);
	cout << char(209);
	for (int i = 0; i < 5; i++) cout << char(205);
	cout << char(209);
	for (int i = 0; i < 5; i++) cout << char(205);
	cout << char(187);

	gotoxy(x, ++y);
	for (int i = 0; i < 9; i++) {
		if (i == 3 || i == 6) {
			cout << char(199);
			for (int i = 0; i < 5; i++) cout << char(196);
			cout << char(197);
			for (int i = 0; i < 5; i++) cout << char(196);
			cout << char(197);
			for (int i = 0; i < 5; i++) cout << char(196);
			cout << char(182);
			gotoxy(x, ++y);
		}
		cout << char(186);
		for (int j = 0; j < 9; j++) {
			if (field.gameField[j][i].getVal() > 0)
				cout << field.gameField[j][i].getVal();
			else
				cout << ' ';
			if (j != 2 && j != 5 && j != 8)
				cout << ' ';
			if (j == 2 || j == 5)
				cout << char(179);
		}
		cout << char(186);
		gotoxy(x, ++y);
	}

	cout << char(200);
	for (int i = 0; i < 5; i++) cout << char(205);
	cout << char(207);
	for (int i = 0; i < 5; i++) cout << char(205);
	cout << char(207);
	for (int i = 0; i < 5; i++) cout << char(205);
	cout << char(188);
	gotoxy(x, ++y);
	cout << endl;
}

Field Interface::readFromFile(int num_choise) {
	ifstream inf("Task.txt");
	if (!inf)
	{
		cerr << "Uh oh, Task.txt could not be opened for reading!" << endl;
		exit(1);
	}
	Field game;
	string str;
	for (int k = 0; k < num_choise; ++k)
		for (int i = 0; i < 9; i++)
			inf >> str;
	for (int i = 0; i < 9; i++) {
		inf >> str;
		for (int j = 0; j < 9; j++) {
			if (str[j] != '0')
				game.fill(j, i, str[j] - 48);
		}
	}
	return game;
}

int Interface::start_choise() {
	SetColor(14, 0);
	cout << "This program solves Sudoku";

	for (int i = 0; i < 10; i++) {
		SetColor(9, 0);
		gotoxy(8 + i % 5 * 18 + i % 5 * 2, 1 + i / 5 * 13 + (i + 5) / 5); cout << '#' << i << '#';
		SetColor(8, 0);
		showTable(readFromFile(i), 0 + i % 5 * 18 + i % 5 * 2, 2 + i / 5 * 13 + (i + 5) / 5);
	}
	SetColor(15, 0);
	cout << "Enter a number from 0 to 9 and choose one of the sudoku to solve ";
	int choise = -1;
	while (!(choise >= 0 && choise <= 9)) {
		cin >> choise;
		if (!(choise >= 0 && choise <= 9))
			cout << "The number does not match the range, try again " << endl;
	}
	return choise;
}