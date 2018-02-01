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