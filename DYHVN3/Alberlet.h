#pragma once
#include "Lakas.h"
#include "Berelheto.h"
class Alberlet : public Lakas, public IBerelheto
{
public:
	int honapSzam;
	Alberlet( int t, int sz, int nm);
	int mennyibeKerul(int honapokszama) override;
	bool lefoglaltE() override;
	bool lefoglal(int honapok_szama) override;
	bool bekoltozik() override;
	std::string toString() override;
};

