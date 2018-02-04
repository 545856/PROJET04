#pragma once
#include "string"
#include <iostream>
using namespace std;

#define CONTINUE 1
#define STOP 0

class CChaine
{
private:	
	string m_sChaine;
	/*char *m_tChaine;
	int m_dTailleMax;
	int m_dIndex;*/
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
	string Getm_sChaine() const noexcept(true);
	//Actions
	string Setm_sChaine() const noexcept(true);

	
	
	
	/*//Prédicats
	int Getm_tChaine() const noexcept(true);
	int Getm_dTailleMax() const noexcept(true);
	int Getm_dIndex() const noexcept(true);
	//Actions
	int Setm_tChaine();
	int Setm_dTailleMax(int dTailleMax);
	int Setm_dIndex(int dTailleMax);*/
};
