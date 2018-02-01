#pragma once
#include "string"
#define STOP 0
#define CONTINUE 1

class CChaine
{
private:
	string m_sChaine;
public:
	CChaine();
	CChaine(const CChaine& CChaineCopie);
	~CChaine();
};