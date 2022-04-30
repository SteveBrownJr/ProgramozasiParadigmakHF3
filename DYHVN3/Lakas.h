#pragma once
#include "Ingatlan.h"
#include <string>
class Lakas : public Ingatlan
{
public:
	int terulet;
	int szobaSzam;
	int nmAr;
	int lakok;
	Lakas(int t, int sz, int nm, int l);
	bool virtual bekoltozik();
	int osszesKoltseg() override ;
	int lakokSzama() const;
	virtual std::string toString();
};

