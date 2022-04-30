#include "Lakas.h"
Lakas::Lakas(int t, int sz, int nm, int l) {
	terulet = t;
	szobaSzam = sz;
	nmAr = nm;
	lakok = l;
}
int Lakas::osszesKoltseg() {
	return terulet * nmAr;
}
bool Lakas::bekoltozik() {
	if (lakok+1<=szobaSzam)
	{
		lakok = lakok + 1;
		return true;
	}
	return false;
}
int Lakas::lakokSzama()const {
	return lakok;
}
std::string Lakas::toString() {
	std::string kimenet = std::to_string(terulet) + " nm ";
	kimenet += std::to_string(szobaSzam) + " szoba ";
	kimenet += std::to_string(nmAr) + "Ft/nm ";
	kimenet += std::to_string(lakok) + " lako ";
	return kimenet;
}
