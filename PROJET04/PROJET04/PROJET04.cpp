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
	string chaine1, chaine2;
	do
	{
		cout << "\n---Gestionnaire de chaînes de caractères---" << endl << endl;
		cout << "[1] Saisir un nouveau message." << endl;
		cout << "[2] Afficher les messages." << endl;
		cout << "[0] Quitter le gestionnaire." << endl << endl;
	} while (fctMenu() != STOP);
	
	return 0;
}

int fctMenu()
{
	int dChoix;

	cout << "Votre choix : ";
	cin >> dChoix;
	cout << endl;

	switch (dChoix)
	{
	case 1:
		return CONTINUE;
	case 2:
		return CONTINUE;
	default:
		return CONTINUE;
	}
}