#include "Cells.h"

Cells::Cells() {
	val = 0;
	for (int i = 1; i <= 9; i++)
		v_set.insert(i);
}

void Cells::setVal(int a) {
	val = a;
	v_set.clear();
}

void Cells::delFromSet(int a) {
	set<int>::iterator it;
	for (it = v_set.begin(); it != v_set.end();)
		if (*it == a)
			it = v_set.erase(it);
		else
			++it;
}

void Cells::showSet() {
	set<int>::iterator it;
	for (it = v_set.begin(); it != v_set.end(); it++)
		cout << *it << ' ';
	cout << endl;
}
