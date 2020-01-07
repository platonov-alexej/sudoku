#pragma once
#include <set>
#include <iostream>
using namespace std;

class Cells
{
private:
	int val;
	set<int> v_set;
public:
	Cells() {
		val = 0;
		for (int i = 1; i <= 9; i++)
			v_set.insert(i);
	}
	
	void setVal(int a) {
		val = a;
		v_set.clear();
	}

	void clear_v_set()
	{
		v_set.clear();
	}

	void add_v_set(int a) {
		v_set.insert(a);
	}

	int getVal() {
		return val;
	}

	void delFromSet(int a) {
		set<int>::iterator it;
		for (it = v_set.begin(); it != v_set.end();)
			if (*it == a)
				it = v_set.erase(it);
			else
				++it;
	}

	void showSet() {
		set<int>::iterator it;
		for (it = v_set.begin(); it != v_set.end();it++) 
			cout << *it << ' ';
		cout << endl;
	}

	int lenSet() {
		return v_set.size();
	}

	set<int> getSet() {
		return v_set;
	}

	void setSet(set<int> a) {
		v_set = a;
	}

	int getFirstFromSet() {
		return *(v_set.begin());
	}
};

