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
	//Surcharge des op�rateurs
	operator string() const;
	CChaine operator=(const CChaine& CChaineCopie);
	ostream& operator <<(const CChaine& CChaineCopie);
	//Pr�dicats
	int Getm_tChaine() const noexcept(true);
	int Getm_dTailleMax() const noexcept(true);
	int Getm_dIndex() const noexcept(true);
	//Actions
};
