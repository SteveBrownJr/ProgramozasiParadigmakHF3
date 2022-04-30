#include "Garazs.h"
using namespace std;

Garazs::Garazs(int t, int nm, bool f) {
	terulet = t;
	nmAr = nm;
	futottE = f;
	honapSzam = 0;
	autO = false;
}
int Garazs::osszesKoltseg() {
	return  static_cast<int>(futottE * nmAr * 1.5);
}
int Garazs::mennyibeKerul(int honapok_szama) {
	return static_cast<int>(osszesKoltseg() * honapok_szama);
}
bool Garazs::lefoglaltE() {
	return honapSzam > 0 || autO;
}
bool Garazs::lefoglal(int honapok_szama) {
	if (!lefoglaltE())
	{
		honapSzam = honapok_szama;
		return true;
	}
	return false;
}
void Garazs::autoKiBeAll() {
	autO = !autO;
}
std::string Garazs::toString() {
	std::string kimenet = to_string(terulet) + "nm ";
	kimenet += to_string(nmAr) + "Ft/nm ";
	if (futottE)
	{
		kimenet += "Futott: igen ";
	}
	else
	{
		kimenet += "Futott: nem ";
	}
	kimenet += to_string(honapSzam) + " honap ";
	if (autO)
	{
		kimenet += " Auto benn all ";
	}
	else
	{
		kimenet += " Auto nem all benn ";
	}
	return kimenet;
}