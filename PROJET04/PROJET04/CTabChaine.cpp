#include "stdafx.h"
#include "string"
#include "iostream"
#include "CChaine.h"
using namespace std;
//...............................
// Constructeurs et destructeur .
//...............................
CTabChaine::CTabChaine()
{
	cout << "Construction d'un objet de type CTabChaine." << endl;
	m_tMessages = (CChaine *)malloc(sizeof(CChaine)*TAILLESTANDARD);
	m_dIndex = 0;
	m_dTailleMax = TAILLESTANDARD;
}
CTabChaine::~CTabChaine()
{
	cout << "Destruction violente de l'instance de type CTabChaine." << endl;
	free(m_tMessages);
	delete &m_dIndex;
	delete &m_dTailleMax;
}
//..........
// Actions .
//..........
void CTabChaine::AddObjectChaine(CChaine MessageAdd)
{
	//m_tMessages[m_dIndex] = MessageAdd;												// Conditions
	m_dIndex++;
}
void CTabChaine::Displaym_tMessages()
{
	for (int i = 0; i < m_dIndex; i++)
	{
		m_tMessages[m_dIndex].Displaym_tChaine();
	}
}
void CTabChaine::AddOnEgality(CChaine)
{

}
void CTabChaine::AddOnConcat(CChaine, CChaine)
{

}