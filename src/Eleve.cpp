using namespace std;

#include "Eleve.h"

void Eleve::setName(string n_name){
	name = n_name;
}

void Eleve::setNote(int n_note) {
	note = n_note;
}

string Eleve::getName() {
	return name;
}

int Eleve::getNote() {
	return note;
}
