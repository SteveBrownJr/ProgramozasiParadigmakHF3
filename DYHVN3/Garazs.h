#pragma once
#include <string>
#include "Ingatlan.h"
#include "Berelheto.h"
class Garazs : public Ingatlan, public IBerelheto
{
public:
	int terulet;
	int nmAr;
	bool futottE;
	int honapSzam;
	bool autO;
	Garazs(int t, int nm, bool f);
	int osszesKoltseg() override;
	int mennyibeKerul(int honapok_szama) override;
	bool lefoglaltE() override;
	bool lefoglal(int honapok_szama) override;
	void autoKiBeAll();
	std::string toString();
};

