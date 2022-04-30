#pragma once
#include "Lakas.h"
class CsaladiApartman : public Lakas
{
public:
	int gyerekekSzama;
	CsaladiApartman(int t, int sz, int nm);
	bool gyerekSzuletik();
	bool bekoltozik() override;
	std::string toString() override;
};

