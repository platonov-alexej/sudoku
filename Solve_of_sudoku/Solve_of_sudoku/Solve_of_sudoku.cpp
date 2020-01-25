#include "Field.h"
#include "Interface.h"
#include <conio.h>

int main()
{
	Field game1;
	Interface inter_face;
	int choise = inter_face.start_choise();
	game1 = inter_face.readFromFile(choise);
	cout << "\nSudoku:\n\n";
	inter_face.showTable(game1);
	cout << "Press any key for solving\n\n";
	_getch();
	game1.solve();
	inter_face.showTable(game1);
	_getch();
}

