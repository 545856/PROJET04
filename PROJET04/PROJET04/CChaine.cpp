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

}
int CChaine::Getm_dTailleMax() const noexcept(true)
{

}
int CChaine::Getm_dIndex() const noexcept(true)
{

}