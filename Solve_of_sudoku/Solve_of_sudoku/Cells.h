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
	Cells();
	
	void setVal(int a); 

	void clear_v_set() { v_set.clear(); }

	void add_v_set(int a) { v_set.insert(a); }

	int getVal() { return val; }

	void delFromSet(int a); 

	void showSet();

	int lenSet() { return v_set.size(); }

	set<int> getSet() { return v_set; }

	void setSet(set<int> a) { v_set = a; }

	int getFirstFromSet() { return *(v_set.begin()); }
};

