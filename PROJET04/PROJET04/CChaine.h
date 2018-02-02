#pragma once
#include "string"
#include <iostream>
using namespace std;

#define CONTINUE 1
#define STOP 0

class CChaine
{
private:
	char *m_tChaine;
	int m_dTailleMax;
	int m_dIndex;
	string m_sChaine;
public:
	//C'tor & d'tor
	CChaine();
	CChaine(string sChaineCopie);
	CChaine(const CChaine& CChaineCopie);
	~CChaine();
	//Surcharge des opérateurs
	operator string() const;
	CChaine operator=(const CChaine& CChaineCopie);
	ostream& operator <<(const CChaine& CChaineCopie);
	//Prédicats
	int Getm_tChaine() const noexcept(true);
	int Getm_dTailleMax() const noexcept(true);
	int Getm_dIndex() const noexcept(true);
	//Actions
	int Setm_tChaine();
	int Setm_dTailleMax(int dTailleMax);
	int Setm_dIndex(int dTailleMax);
};
