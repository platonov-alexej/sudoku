#pragma once
#include<iostream>
#include"Cells.h"
class Field
{
private:
	Cells gameField[9][9];

	bool removeOfCandidates() {
		bool flag = false;
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				if (gameField[j][i].getVal() > 0) {
					for (int k = 0; k < 9; k++) {
						/*if (gameField[j][k].getVal() == 0)*/
						gameField[j][k].delFromSet(gameField[j][i].getVal());
						/*if (gameField[k][i].getVal() == 0)*/
						gameField[k][i].delFromSet(gameField[j][i].getVal());
					}
					for (int i1 = i / 3 * 3; i1 < i / 3 * 3 + 3; i1++)
						for (int j1 = j / 3 * 3; j1 < j / 3 * 3 + 3; j1++)
							gameField[j1][i1].delFromSet(gameField[j][i].getVal());
				}
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				if (gameField[j][i].lenSet() == 1) {
					gameField[j][i].setVal(gameField[j][i].getFirstFromSet());
					flag = true;
				}
		return flag;
	}

public:
	Field() {

	}

	void fill(int x, int y, int a) {
		gameField[x - 1][y - 1].setVal(a);
	}

	void show() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				if (gameField[j][i].getVal() > 0)
					cout << gameField[j][i].getVal();
				else
					cout << ' ';
			cout << endl;
		}
		cout << endl;
	}



	

	void solve() {
		while (removeOfCandidates())
		{
			show();
			system("pause");
		}
	}
};

