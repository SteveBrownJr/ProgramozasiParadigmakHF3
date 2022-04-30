#pragma once

#include <vector>
#include "Alberlet.h"
#include "Lakas.h";
#include "Garazs.h";
#include "Alberlet.h"
#include "CsaladiApartman.h"
#include <memory>

class Tarsashaz
{
private:
	int maxLakas;
	int maxGarazs;
public:
	Tarsashaz(int maxL, int maxG);
	std::vector<Ingatlan*> kollekcio;
	bool LakasHozzaad(Lakas* l);
	bool GarazsHozzaad(Garazs* g);
	int osszesLako();
	int ingatlanErtek();
};

