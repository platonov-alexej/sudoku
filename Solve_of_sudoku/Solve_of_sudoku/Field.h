#pragma once
#include<iostream>
#include"Cells.h"
#include<windows.h>


class Field
{
private:
	Cells gameField[9][9];

	void delCandidates(int val, int x, int y, Cells mas[9][9]) {			//исключение кандидатов по вертикали, горизонтали и в малом квадрате
		for (int k = 0; k < 9; k++) {
			mas[x][k].delFromSet(val);
			mas[k][y].delFromSet(val);

		}
		for (int i1 = y / 3 * 3; i1 < y / 3 * 3 + 3; i1++) {
			for (int j1 = x / 3 * 3; j1 < x / 3 * 3 + 3; j1++) {
				mas[j1][i1].delFromSet(val);
			}
		}
	}

	bool arrangement(Cells tmpField[9][9]) {
		bool flag;
		bool flag2 = true;
		do {
			flag = true;
			for (int i = 0; i < 9; i++)					//поиск ячеек со значением и удаление кандидатов из связанных ячеек			
				for (int j = 0; j < 9; j++)
					if (tmpField[j][i].getVal() > 0) {
						delCandidates(tmpField[j][i].getVal(), j, i, tmpField);
					}
					else flag = false;
			for (int i = 0; i < 9; i++)									//поиск ячеек с единственным кандидатом и перевод его в значение
				for (int j = 0; j < 9; j++) {
					if (tmpField[j][i].lenSet() == 1) {
						tmpField[j][i].setVal(tmpField[j][i].getFirstFromSet());
						delCandidates(tmpField[j][i].getVal(), j, i, tmpField);
						flag = true;
					}
					if (tmpField[j][i].lenSet() == 0 && tmpField[j][i].getVal() == 0)	//условие тупиковости рекурсивной ветки
						return false;
				}
			if (flag == false)					//проба кандидата из сэта на место в ячейке при отсутствии единственного кандидата
				for (int i = 0; i < 9; i++)
					for (int j = 0; j < 9; j++)
						if (tmpField[j][i].lenSet() > 1) {
							while (tmpField[j][i].lenSet() > 0) {
								Cells tmp[9][9];         //создание дубликата массива для пробной рекурсивной ветки 
								for (int x = 0; x < 9; x++)
									for (int y = 0; y < 9; y++)
										tmp[y][x] = tmpField[y][x];
								tmp[j][i].setVal(tmp[j][i].getFirstFromSet());

								if (arrangement(tmp))     //в случае успеха рекурсивной ветки (удалось полность заполнить поле) дубликатом заменяется оригинал
								{
									for (int i = 0; i < 9; i++)
										for (int j = 0; j < 9; j++)
											tmpField[j][i] = tmp[j][i];
								}
								else
								{
									tmpField[j][i].delFromSet(tmp[j][i].getVal());    //в случае тупиковости ветки данный кандидат удаляется из сэта кандидатов
								}
							}
						}
			flag2 = true;						//проверка на полноту решения
			for (int i = 0; i < 9; i++)
				for (int j = 0; j < 9; j++)
					if (tmpField[j][i].getVal() == 0)
						flag2 = false;
			
			if (flag2 == true) 	return true;
			
		} while (flag2 == false);     //зациклить до тех пор пока не заполнятся все ячейки
	}

public:
	Field() {

	}

	
	void fill(int x, int y, int a) {
		gameField[x-1][y-1].setVal(a);
	}

	void fill1(int x, int y, int a) {
		gameField[x][y].setVal(a);
	}


	void solve() {
		if (arrangement(gameField)) 
			cout << "Solution of this sudoku: " << endl;
		else
			cout << "This sudoku doesn't have any solution" << endl;
	}

	friend class Interface;
};

