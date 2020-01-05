#include <iostream>
#include "Field.h"

int main()
{
	/*Cells cell1;
	cell1.showSet();
	cell1.delFromSet(3);
	cell1.showSet();*/
	Field game1;
	game1.fill(3, 1, 8); game1.fill(4, 1, 1); game1.fill(5, 1, 7); game1.fill(7, 1, 5); game1.fill(9, 1, 6);
	game1.fill(1, 2, 1); game1.fill(2, 2, 9); game1.fill(4, 2, 4); game1.fill(5, 2, 6); game1.fill(7, 2, 3); game1.fill(8, 2, 7);
	game1.fill(1, 3, 2); game1.fill(2, 3, 6); game1.fill(3, 3, 7); game1.fill(5, 3, 3); game1.fill(6, 3, 8); game1.fill(7, 3, 9);

	game1.fill(2, 4, 8); game1.fill(3, 4, 6); game1.fill(4, 4, 2); game1.fill(6, 4, 3); game1.fill(8, 4, 4); 
	game1.fill(1, 5, 7); game1.fill(2, 5, 1); game1.fill(4, 5, 8); game1.fill(5, 5, 9); game1.fill(6, 5, 6); game1.fill(9, 5, 3);
	game1.fill(1, 6, 5); game1.fill(2, 6, 2); game1.fill(6, 6, 4); game1.fill(7, 6, 8); game1.fill(8, 6, 6); game1.fill(9, 6, 9);

	game1.fill(1, 7, 8); game1.fill(3, 7, 9); game1.fill(5, 7, 2); game1.fill(6, 7, 5); game1.fill(8, 7, 3); 
	game1.fill(3, 8, 2); game1.fill(4, 8, 3); game1.fill(5, 8, 8); game1.fill(6, 8, 1); game1.fill(8, 8, 9); 
	game1.fill(1, 9, 3); game1.fill(2, 9, 5); game1.fill(3, 9, 1); game1.fill(4, 9, 9); game1.fill(7, 9, 6); 
	
	game1.show();
	system("pause");
	game1.solve();

	system("pause");
}

