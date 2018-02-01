#include "stdafx.h"
#include "string"
#include "iostream"
#include "CChaine.h"
using namespace std;

CChaine::CChaine()
{

}
CChaine::CChaine(const CChaine& oChaineCopie)
{
	m_sChaine = oChaineCopie.m_sChaine;
}
CChaine::~CChaine()
{
	delete &m_sChaine;
}