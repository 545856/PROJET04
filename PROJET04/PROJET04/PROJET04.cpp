// PROJET04.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "string"
#include "iostream"
#include "CChaine.h"
using namespace std;

int fctMenu();


int main()
{
	
	do
	{
		//system("cls");
		cout << "\n---Gestionnaire de chaines de caracteres---" << endl << endl;
		cout << "--- PART 1 ---" << endl;
		cout << "[1] Saisir un nouveau message." << endl;
		cout << "[2] Afficher les messages." << endl;
		cout << "--- PART 2 ---" << endl;
		cout << "[0] Quitter le gestionnaire." << endl << endl;
	} while (fctMenu() != STOP);
	
	return 0;
}

int fctMenu()
{
	int dChoix;
	string sChaineUtilisateur;

	cout << "Votre choix : ";
	cin >> dChoix;
	cout << endl;

	switch (dChoix)
	{
	case 1:
		system("cls");
		cout << "Insertion d'une chaine de caracteres :" << endl;
		cin >> sChaineUtilisateur;
		cout << sChaineUtilisateur;
		return CONTINUE;
	case 2:
		return CONTINUE;
	default:
		return CONTINUE;
	}
}