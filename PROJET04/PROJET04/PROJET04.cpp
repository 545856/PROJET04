// PROJET04.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "string"
#include "iostream"
#include "CChaine.h"
using namespace std;

int fctChoix();

int main()
{
	Rectangle r1(1);
	Rectangle r2(2);
	Rectangle r3(3);

	r1 = r2 = r3;

	r1.affichage();



	int dChoix = 0, dIndex = 0;
	string sMessage;
	char* tMessage;
	char* tMessage2;
	CChaine oChaine1;
	CChaine oChaine2;
	CChaine oChaine3;
	CChaine oChaine4;
	system("pause");
	do
	{
		dChoix = 0;
		system("cls");
		cout << "\n---Gestionnaire de chaines de caracteres---" << endl;						// Liste des différentes actions.
		cout << "--- PART 1 ---" << endl;
		cout << "[1] Saisir un nouveau message (string)." << endl;
		cout << "[2] Saisir un nouveau message (char*)." << endl;
		cout << "[3] Afficher le message." << endl;
		cout << "[4] Afficher le message dans une variable de type string." << endl;
		cout << "[5] Afficher le message dans une variable de type char*." << endl;
		cout << "--- PART 2 ---" << endl;
		cout << "[6] Lancer une copie du nouveau message dans un autre objet" << endl;
		cout << "[7] Saisir deux messages et les concatener." << endl;
		cout << "[0] Quitter le gestionnaire." << endl;		
		try																						// Lecture et vérification du choix utilisateurs.
		{
			dChoix = fctChoix();
		}
		catch (exception const& oE)
		{
			system("cls");
			cerr << "Erreur : " << oE.what() << endl;
		}

		if (dChoix == 1)																		// Lecture nouveau message (string).
		{
			system("cls");
			cout << "\n---Gestionnaire de chaines de caracteres---" << endl;
			cout << "Saisir un message : ";
			cin >> sMessage;
			cout << endl;
			oChaine1.AddString(sMessage);
			system("pause");
		}
		if (dChoix == 2)																		// Lecture nouveau message (char*).
		{
			system("cls");
			cout << "\n---Gestionnaire de chaines de caracteres---" << endl;
			cout << "Saisir un message : ! ";
			cin >> sMessage;																	// P'tit problème avec la gestion du char*.		
			tMessage = (char *)malloc(sizeof(char)*sMessage.size());
			for (dIndex = 0; dIndex < sMessage.size(); dIndex++)
			{
				tMessage[dIndex] = sMessage[dIndex];
			}
			tMessage[dIndex+1] = '\n';			
			oChaine1.AddTabChar(tMessage);
			system("pause");
		}
		if (dChoix == 3)																		// Affichage d'un objet CChaine avec sa propre fonction d'affichage.
		{
			system("cls");
			cout << "\n---Gestionnaire de chaines de caracteres---" << endl;
			cout << "Votre message : ";			
			oChaine1.Displaym_tChaine();
			cout << endl;
			system("pause");
		}
		if (dChoix == 4)																		// Affichage d'un objet CChaine dans une variable de type string.
		{
			system("cls");
			cout << "\n---Gestionnaire de chaines de caracteres---" << endl;
			sMessage = (char*)(oChaine1);
			cout << sMessage << endl;
			system("pause");
		}
		if (dChoix == 5)																		// Affichage d'un objet CChaine dans une variable de type char*.
		{
			system("cls");
			cout << "\n---Gestionnaire de chaines de caracteres---" << endl;
			tMessage2 = (char*)malloc(sizeof(char)*(oChaine1.Getm_dTailleMax()-1));
			tMessage2 = (char*)(oChaine1);
			cout << tMessage2 << endl;
			system("pause");
		}
		if (dChoix == 6)																		// Copie d'un objet CChaine1 dans un objet CChaine2 et affichage
		{
			system("cls");
			cout << "\n---Gestionnaire de chaines de caracteres---" << endl;
			cout << "Votre ancien message : ";
			oChaine1.Displaym_tChaine();
			cout << endl;
			cout << "Votre message copie : ";
			oChaine2=oChaine1;
			oChaine2.Displaym_tChaine();
			cout << endl;
			system("pause");
		}
		if (dChoix == 7)																		// Saisie de deux messages 
		{
			system("cls");
			cout << "\n---Gestionnaire de chaines de caracteres---" << endl;
			cout << "Saisir un message : ";
			cin >> sMessage;
			cout << endl;
			oChaine3.AddString(sMessage);
			cout << "Saisir un message : ";
			cin >> sMessage;
			cout << endl;
			oChaine4.AddString(sMessage);
			oChaine3 += oChaine4;
			oChaine3.Displaym_tChaine();
			cout << endl;
			system("pause");
		}
	} while (dChoix != STOP);
	return 0;
}

// Fonctions du main
int fctChoix()
{
	int dChoix;
	cin >> dChoix;
	if ((dChoix >= 0) && (dChoix <= 7))
	{
		return dChoix;
	}
	else
	{
		throw Erreur(456, "choix non valide. Fin du programme", 2);
		return STOP;
	}
}

