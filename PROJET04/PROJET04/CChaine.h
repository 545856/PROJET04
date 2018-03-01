#pragma once
#include "string"
#include <iostream>
using namespace std;

#define CONTINUE 1
#define STOP 0
#define TAILLESTANDARD 259

class CChaine
{
private:	
	//Données membres
	char *m_tChaine;
	int m_dTailleMax;
public:
	//C'tor & d'tor
	CChaine();
	CChaine(string sChaineCopie);
	CChaine(char *pTabChar);
	CChaine(const CChaine& oChaineCopie);
	~CChaine();
	//Actions
	void AddString(string);
	void AddTabChar(char*);
	void Displaym_tChaine();
	//Prédicats
	int Getm_tChaine(int dIndex) const noexcept(true);
	int Getm_dTailleMax() const noexcept(true);
	//Actions
	void Setm_tChaine(int dIndex, char cAdd);
	void Setm_dTailleMax(int dTailleMax);
	//Surcharge des opérateurs
	CChaine operator = (const CChaine& CChaineCopie);
	CChaine operator += (const CChaine& CChaineCopie);
	operator string() const;
	operator char*() const;	
	/*ostream& operator <<(const CChaine& CChaineCopie);*/
};

class CTabChaine 
{
private :
	//Données membres
	CChaine *m_tMessages;
	int m_dTailleMax;
	int m_dIndex;
public:
	//C'tor & d'tor
	CTabChaine();
	~CTabChaine();
	//Actions
	void AddObjectChaine(CChaine);
	void AddOnEgality(CChaine);
	void AddOnConcat(CChaine, CChaine);
	void Displaym_tMessages();
};

class Erreur : public exception
{
private:
	int m_dNumeroErreur;
	string m_strMessageErreur;
	int m_dNiveauErreur;
public:
	Erreur(int dNumero, string const& strPhrase, int dNiveau) noexcept(true);	//Constructeur reprenant un numero d'erreur, un message d'erreur et un niveau d'erreur.
	virtual ~Erreur() throw();													//Déconstructeur 
	virtual const char* what() const noexcept(true);							//Affichage d'un message d'erreur
	int getNiveauErreur() const noexcept(true);
	int getNumeroErreur() const noexcept(true);
};

class Rectangle
{
private:
	int surface;
public:
	Rectangle(int);
	Rectangle(const Rectangle& oRectangle);
	Rectangle& operator= (const Rectangle& Rectangle);
	void affichage();
};