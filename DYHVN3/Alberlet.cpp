#include "Alberlet.h"
Alberlet::Alberlet( int t, int sz, int nm) : Lakas(t, sz, nm, 0) {
	honapSzam = 0;
}
int Alberlet::mennyibeKerul(int honapokszama) {
	if (lakok==0)
	{
		return 1;
	}
	else
	{
		
		int kimenet = terulet * nmAr ;
		return kimenet / lakok * honapokszama;
	}
}
bool Alberlet::lefoglaltE() {
	return honapSzam == 0;
}
bool Alberlet::lefoglal(int honapok_szama) {
	if (honapSzam>0)
	{
		return false;
	}
	else
	{
		honapSzam = honapok_szama;
		return true;
	}
}
bool Alberlet::bekoltozik() {
	if ((terulet/szobaSzam/(lakok+1))>=2)
	{
		return Lakas::bekoltozik();
	}
	return false;

}
std::string Alberlet::toString() {
	std::string kimenet = Lakas::toString();
	std::string kimenet2 = std::to_string(honapSzam) + " honap ";
	return kimenet + kimenet2;
}