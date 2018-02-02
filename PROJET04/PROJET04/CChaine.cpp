#include "stdafx.h"
#include "string"
#include "iostream"
#include "CChaine.h"
using namespace std;
//...............................
// Constructeurs et destructeur .
//...............................
CChaine::CChaine()
{
	
}
CChaine::CChaine(string sChaineCopie)
{
	m_tChaine = (char*)malloc(sizeof(char) * sChaineCopie.size());
	Setm_dTailleMax(sChaineCopie.size());
	for (int i = 0; i < sChaineCopie.size(); i++)
	{
		m_tChaine[i] = sChaineCopie[1];
	}
}
CChaine::CChaine(const CChaine& oChaineCopie)
{

}
CChaine::~CChaine()
{
	cout << "Suppression de l'instance" << endl;
	free(m_tChaine);
	delete &m_dIndex;
	delete &m_dTailleMax;
}
//...........................
// Surcharge des opérateurs .
//...........................
CChaine::operator string() const
{
	string sCopieTabChar;

	for (int dCompteur = 0; dCompteur < Getm_dIndex();dCompteur++)
	{

	}
}
CChaine CChaine::operator =(const CChaine& CChaineCopie)
{

}
ostream& CChaine::operator<<(const CChaine& CChaineCopie)
{

}
//....................
// Getters & Setters .
//....................
int CChaine::Getm_tChaine() const noexcept(true)
{
	//cout << Objet<<end;
}
int CChaine::Getm_dTailleMax() const noexcept(true)
{
	return m_dTailleMax;
}
int CChaine::Getm_dIndex() const noexcept(true)
{
	return m_dIndex;
}
int CChaine::Setm_tChaine()
{
	//
}
int CChaine::Setm_dTailleMax(int dTailleMax)
{
	//m_dTailleMax
}
int CChaine::Setm_dIndex(int dindex)
{

}
