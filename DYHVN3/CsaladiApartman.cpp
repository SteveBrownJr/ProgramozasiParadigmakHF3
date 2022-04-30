#include "CsaladiApartman.h"
CsaladiApartman::CsaladiApartman(int t, int sz, int nm) : Lakas(t, sz, nm, 0) {
	gyerekekSzama = 0;
}
bool CsaladiApartman::gyerekSzuletik() {
	if (lakokSzama() - gyerekekSzama >= 2)
	{
		gyerekekSzama++;
		bekoltozik();
		return true;
	}
	else
	{
		return false;
	}
}
bool CsaladiApartman::bekoltozik() {
	int felnottek = lakokSzama() - gyerekekSzama;
	if (gyerekekSzama>0)
	{
		if ((terulet / szobaSzam / (felnottek*(gyerekekSzama/2.0))) >= 2)
		{
			if (lakok + 1 <= szobaSzam)
			{
				return Lakas::bekoltozik();
			}
		}
	}
	else
	{
			return Lakas::bekoltozik();
	}
	return false;
}
std::string CsaladiApartman::toString() {
	std::string kimenet = Lakas::toString();
	std::string kimenet2 = std::to_string(gyerekekSzama) + " gyerekekSzama";
	return kimenet + kimenet2;
}