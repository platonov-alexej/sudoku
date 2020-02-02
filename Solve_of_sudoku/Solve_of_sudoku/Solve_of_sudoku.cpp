#include "Field.h"
#include "Interface.h"
#include <conio.h>
#include <windows.h>
#include <stdio.h> 
#include <time.h> 

int main()
{
	HWND hwnd;
	char Title[1024];
	hwnd = GetConsoleWindow();
	MoveWindow(hwnd, 0, 0, 1000, 1000, TRUE);//xnew,ynew,wnew,hnew -новые положение x,y, ширина и высота

	Field game;
	Interface inter_face;
	int choise = inter_face.start_choise();
	game = inter_face.readFromFile(choise);
	cout << "\nYour choise is sudoku #" << choise << ":";
	inter_face.showTable(game,0,35);
	cout << "Press any key for solving\n\n";
	_getch();
	clock_t start = clock();
	game.solve();
	clock_t end = clock();
	inter_face.showTable(game,0,53);
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "time of solve is " << seconds << "s" << endl;
	_getch();
}

