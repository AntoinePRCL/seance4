#pragma once
using namespace std;


#include <string>

class Eleve {
protected:
	string name;
	int note;

public:
	void setName(string n_nom);
	void setNote(int n_note);
	string getName();
	int getNote();
};
