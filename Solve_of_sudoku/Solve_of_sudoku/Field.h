#pragma once
#include<iostream>
#include"Cells.h"
#include<windows.h>


class Field
{
private:
	Cells gameField[9][9];

	void delCandidates(int val, int x, int y, Cells mas[9][9]); 		

	bool arrangement(Cells tmpField[9][9]); 
public:
	Field() { };

	void fill(int x, int y, int a) { gameField[x][y].setVal(a); }


	void solve();

	friend class Interface;
};

