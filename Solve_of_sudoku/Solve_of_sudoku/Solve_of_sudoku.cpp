#include <iostream>
#include "Field.h"

int main()
{
	Field game1;
	/*game1.fill(5, 1, 3); game1.fill(7, 1, 9); 
	game1.fill(2, 2, 7); game1.fill(6, 2, 8); game1.fill(7, 2, 1); game1.fill(8, 2, 4);
	game1.fill(1, 3, 5); game1.fill(5, 3, 9); game1.fill(9, 3, 2);

	game1.fill(3, 4, 2); game1.fill(4, 4, 8);
	game1.fill(1, 5, 8); game1.fill(5, 5, 1); game1.fill(7, 5, 5); game1.fill(8, 5, 9);
	game1.fill(1, 6, 9); game1.fill(2, 6, 1); game1.fill(4, 6, 4); game1.fill(7, 6, 8); 

	game1.fill(1, 7, 1); game1.fill(5, 7, 6); game1.fill(6, 7, 7);
	game1.fill(6, 8, 1); game1.fill(8, 8, 5); 
	game1.fill(3, 9, 3); game1.fill(6, 9, 2); game1.fill(8, 9, 8); game1.fill(9, 9, 1); */



	///*game1.fill(1, 1, 8);*/ game1.fill(2, 1, 7); game1.fill(3, 1, 5); game1.fill(4, 1, 3); game1.fill(8, 1, 9);
	//game1.fill(4, 2, 6); game1.fill(6, 2, 8); game1.fill(7, 2, 5); game1.fill(8, 2, 7); game1.fill(9, 2, 3); /*game1.fill(8, 2, 7);*/
	//game1.fill(3, 3, 6); game1.fill(4, 3, 5); game1.fill(5, 3, 9); game1.fill(7, 3, 2); game1.fill(9, 3, 8); /*game1.fill(7, 3, 9);*/

	//game1.fill(2, 4, 2); game1.fill(3, 4, 7); game1.fill(4, 4, 8); game1.fill(7, 4, 1); /*game1.fill(8, 4, 4); */
	///*game1.fill(1, 5, 4);*/ game1.fill(3, 5, 3); game1.fill(5, 5, 1); game1.fill(7, 5, 7); /*game1.fill(8, 5, 8); game1.fill(9, 5, 9);*/
	//game1.fill(1, 6, 1); game1.fill(2, 6, 9); game1.fill(8, 6, 5); game1.fill(9, 6, 2); /*game1.fill(8, 6, 6); game1.fill(9, 6, 9);*/

	//game1.fill(1, 7, 7); game1.fill(4, 7, 9); game1.fill(5, 7, 6); game1.fill(6, 7, 5); game1.fill(7, 7, 3); game1.fill(8, 7, 2);
	///*game1.fill(1, 8, 5)*//*; game1.fill(2, 8, 6);*//* game1.fill(3, 8, 2);*/ game1.fill(8, 8, 4); /*game1.fill(8, 8, 9); */
	//game1.fill(3, 9, 1); game1.fill(4, 9, 4); game1.fill(5, 9, 7); game1.fill(6, 9, 2);/* game1.fill(7, 9, 8); game1.fill(9, 9, 5);*/


	game1.fill(4, 1, 6); game1.fill(9, 1, 3);
	game1.fill(2, 2, 3); game1.fill(5, 2, 8); game1.fill(6, 2, 2); game1.fill(8, 2, 1);
	game1.fill(1, 3, 2); game1.fill(2, 3, 6); game1.fill(3, 3, 1); game1.fill(4, 3, 5);

	game1.fill(8, 4, 6); game1.fill(9, 4, 9); 
	game1.fill(1, 5, 1); game1.fill(4, 5, 2); game1.fill(5, 5, 7); game1.fill(6, 5, 4); 
	game1.fill(1, 6, 8); game1.fill(3, 6, 3); game1.fill(4, 6, 9); game1.fill(9, 6, 1); 

	game1.fill(1, 7, 3); game1.fill(3, 7, 4); game1.fill(6, 7, 8);
	game1.fill(5, 8, 2); game1.fill(6, 8, 5); game1.fill(9, 8, 4);
	game1.fill(2, 9, 7); game1.fill(5, 9, 4); game1.fill(8, 9, 8); game1.fill(9, 9, 5); 
	
	game1.show();
	system("pause");
	game1.solve();

	system("pause");
}

