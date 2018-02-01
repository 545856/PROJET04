#pragma once
#define STOP 0
#define CONTINUE 1

class CChaine
{
private:
	int *m_tChaine;
	int m_dTailleMax;
	int m_dIndex;
public:
	//C'tor & d'tor
	CChaine();
	CChaine(string sChaineCopie);
	CChaine(const CChaine& CChaineCopie);
	~CChaine();
	//Surcharge des opérateurs
	operator string() const;
	operator CChaine() const;	
	CChaine operator =(const CChaine& CChaineCopie);
	//Prédicats

	//Actions
};
