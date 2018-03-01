#include "stdafx.h"
#include "string"
#include "iostream"
#include "CChaine.h"
using namespace std;
//...............................
// Constructeurs et destructeur .
//...............................

//Constructeur par défaut.
CChaine::CChaine()
{
	cout << "Construction par defaut d'un objet de type CChaine" << endl;
	m_tChaine = (char *)malloc(sizeof(char)*TAILLESTANDARD);																// Allocation sur base d'une tailel standard.		
	Setm_dTailleMax(TAILLESTANDARD);
}

//Constructeur sur base d'une string.
CChaine::CChaine(string sChaineCopie)
{
	cout << "Construction par copie d'un objet de type CChaine sur base d'une chaîne de caracteres (string)." << endl;
	m_tChaine = (char*)malloc(sizeof(char) * sChaineCopie.size());															// Allocation sur base de la taille de la chaîne !
	Setm_dTailleMax(sChaineCopie.size());
	for (int i = 0; i < sChaineCopie.size(); i++)
	{
		m_tChaine[i] = sChaineCopie[i];
	}
}

//Constructeur sur base d'un tableau de caractères.
CChaine::CChaine(char *pTabChar)
{
	cout << "Construction par copie d'un objet de type CChaine sur base d'un tableau de caracteres (char*)." << endl;
	int i;
	for (i = 0; Getm_tChaine(i) != '\n'; i++);
	Setm_dTailleMax(i);
	m_tChaine = (char*)malloc(sizeof(char) * i);																			// Allocation sur base de la taille de la chaîne
	for (int i = 0; i < Getm_dTailleMax(); i++)
	{
		m_tChaine[i] = pTabChar[i];
	}	
}

//Constructeur sur base d'un objet de type CChaine.
CChaine::CChaine(const CChaine& oChaineCopie)
{
	//cout << "Creation d'un objet de type CChaine a travers le constructeur de copie." << endl;
	Setm_dTailleMax(oChaineCopie.Getm_dTailleMax());
	m_tChaine = (char*)malloc(sizeof(char) * Getm_dTailleMax());
	for (int i = 0; i < Getm_dTailleMax(); i++)
	{
		m_tChaine[i] = oChaineCopie.m_tChaine[i];
	}
}

//Destructeur
CChaine::~CChaine()
{
	cout << "Suppression d'une instance de type CChaine" << endl;
	free(m_tChaine);
	//delete m_dTailleMax;
}

//...........................
// Surcharge des opérateurs .
//...........................

//Surcharge de l'opérateur d'assignation
CChaine CChaine::operator = (const CChaine& cChaineCopie)
{
	int i = 0;
	this->Setm_dTailleMax(cChaineCopie.Getm_dTailleMax());
	for (i = 0; i < cChaineCopie.Getm_dTailleMax(); i++)
	{
		m_tChaine[i] = cChaineCopie.m_tChaine[i];
	}

	return *this;
}
//Surcharge de l'opérateur += (paraît que ça ne se fait pas -> se renseigner)
CChaine CChaine::operator += (const CChaine& cChaineCopie)
{
	int dPos1, dPos2 = 0;
	this->Setm_dTailleMax(Getm_dTailleMax() + cChaineCopie.Getm_dTailleMax());
	for (dPos1 = (Getm_dTailleMax() - cChaineCopie.Getm_dTailleMax()), dPos2 = 0; dPos1 < Getm_dTailleMax(); dPos1++, dPos2++)
	{
		m_tChaine[dPos1] = cChaineCopie.m_tChaine[dPos2];
	}
	return *this;
}

//Surcharge de l'opérateur d'assignation pour le type string
CChaine::operator string() const
{
	string sMessage;
	sMessage = m_tChaine;
	return sMessage;
}

//Surcharge de l'opérateur d'assignation pour le type char*
CChaine::operator char*() const
{
	return m_tChaine;
}
/*
ostream& CChaine::operator<<(const CChaine& CChaineCopie)
{

}
*/
//....................
// Getters & Setters .
//....................
int CChaine::Getm_tChaine(int dIndex) const noexcept(true)
{
	return m_tChaine[dIndex];
}
int CChaine::Getm_dTailleMax() const noexcept(true)
{
	return m_dTailleMax;
}
void CChaine::Setm_tChaine(int dIndex,char cAdd)
{
	m_tChaine[dIndex]=cAdd;
}
void CChaine::Setm_dTailleMax(int dTailleMax)
{
	m_dTailleMax = dTailleMax;
}
//..........
// Actions .
//..........

// Affichage de la chaîne d'un objet CChaine.
void CChaine::Displaym_tChaine()
{
	for (int i = 0; i < Getm_dTailleMax(); i++)
	{
		cout << m_tChaine[i];
	}
	//cout << endl;
}
// Ajout d'une chaîne de caractères (string) dans un objet CChaine.
void CChaine::AddString(string sChaineCopie)
{
	free(m_tChaine);																										// Libération de l'espace mémoire précedemment alloué à m_tChaine sur base de TAILLESTANDARD	
	Setm_dTailleMax(sChaineCopie.size());																					// Calcul de la taille de la chaine de caractères
	m_tChaine = (char*)malloc(sizeof(char) * Getm_dTailleMax());															// Allocation sur base de la taille de la chaîne
	for (int i = 0; i < Getm_dTailleMax(); i++)
	{
		m_tChaine[i] = sChaineCopie[i];
	}
}

//Ajout d'une chaîne de caractères (char*) dans un objet CChaine.
void CChaine::AddTabChar(char* tMessageCopie)
{
	int i;	
	free(m_tChaine);																										// Libération de l'espace mémoire précedemment alloué à m_tChaine sur base de TAILLESTANDARD
	for (i = 0; tMessageCopie[i] != '\n'; i++);																				// Calcul de la taille de la chaine de caractères
	Setm_dTailleMax(i-1);
	m_tChaine = (char*)malloc(sizeof(char) * Getm_dTailleMax());																			// Allocation sur base de la taille de la chaîne	
	for (int i = 0; i < Getm_dTailleMax(); i++)
	{
		m_tChaine[i] = tMessageCopie[i];
	}
}


Rectangle::Rectangle(int surfaco)
{
	cout << "construction objet rectangle par int" << endl;
	surface = surfaco;
}
Rectangle::Rectangle(const Rectangle& oRectangle)
{
	cout << "construction objet rectangle par objet" << endl;
	surface = oRectangle.surface;
}
Rectangle& Rectangle::operator = (const Rectangle& Rectangle)
{
	cout << "surcharge operateur assignation" << endl;
	surface = Rectangle.surface;

	return (*this);
}

void Rectangle::affichage()
{
	cout << surface << endl;
}