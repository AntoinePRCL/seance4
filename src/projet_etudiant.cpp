#include <iostream>
#include <vector>
#include <string>
#include "Eleve.h"
#include <fstream>

using namespace std;

int main () {

	vector <Eleve> list(0);
	int choix;
	string name;
	int note;

	ofstream f_notes;
	f_notes.open("notes.txt");
	do {
	int i = 0;
	Eleve eleve;
	cout<<"		Projet Etudiant		"<<endl;
	cout<<"1 - Consulter un étudiant"<<endl;
	if (list.size() < 5) cout<<"2 - Ajouter un étudiant"<<endl;
	else cout<<"! Création d'étudiant impossible : liste pleine !"<<endl;
	cout<<"3 - Aficher la liste des étudiants"<<endl;
	cout<<"4 - Quitter le programme"<<endl;
	cin>>choix;
	switch (choix) {
	case 2 :
		cout<<"Entrez le nom de l'étudiant : ";
		cin>>name;
		eleve.setName(name);
		cout<<"Entrez la note de l'étudiant : ";
		cin>>note;
		eleve.setNote(note);
		list.push_back(eleve);
		f_notes<<name<<" : "<<note<<endl;
		break;
	case 1 :
		cout<<"Entrez le nom de l'étudiant : ";
		cin>>name;
		for (int i = 0; i<list.size(); i++){
			if (name == list[i].getName()) cout<<"Note de "<<list[i].getName()<<" : "<<list[i].getNote()<<endl;
			break;
		}
		/*while ((name != list[i].getName())&&(i <= list.size()))
 		{
			cout<<"saisie :"<<name<<" nom : "<<list[i].getName()<<endl;
			if (name == list[i].getName()) {cout<<"Note de "<<name<<" : "<<list[i].getNote()<<endl;}
			if (i > list.size()) {cout<<"Etudiant inconnu"<<endl;}
			i++;
		}*/
		break;
	case 4 :
		return 0;
		break;
	case 3 :
		while (i < list.size()) {
		cout<<list[i].getName()<<" : "<<list[i].getNote()<<endl;
		i++;
		}
	}
	}while (1);
	f_notes.close();
}
