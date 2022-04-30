#include "Tarsashaz.h"
Tarsashaz::Tarsashaz(int maxL, int maxG) {
	maxLakas = maxL;
	maxGarazs = maxG;
	kollekcio=std::vector<Ingatlan*>();
}
bool Tarsashaz::LakasHozzaad(Lakas* l) {
	int lakasok = 0;
	for (size_t i = 0; i < kollekcio.size(); i++)
	{
		if (dynamic_cast<Lakas*>(kollekcio[i])!=nullptr)
		{
			lakasok++;
		}
	}
	if (lakasok<=maxLakas)
	{
		kollekcio.push_back(l);
		return true;
	}
	return false;
}
bool Tarsashaz::GarazsHozzaad(Garazs* g) {
	int garazsok = 0;
	for (size_t i = 0; i < kollekcio.size(); i++)
	{
		if (dynamic_cast<Garazs*>(kollekcio[i]) != nullptr)
		{
			garazsok++;
		}
	}
	if (garazsok <= maxGarazs)
	{
		kollekcio.push_back(g);
		return true;
	}
	return false;
}
int Tarsashaz::osszesLako() {
	int lakok = 0;
	for (size_t i = 0; i < kollekcio.size(); i++)
	{
		if (dynamic_cast<Lakas*>(kollekcio[i]) != nullptr)
		{
			lakok += dynamic_cast<Lakas*>(kollekcio[i])->lakokSzama();
		}
	}
	return lakok;
}
int Tarsashaz::ingatlanErtek() {
	int osszesertek = 0;
	for (size_t i = 0; i < kollekcio.size(); i++)
	{
		if (dynamic_cast<Lakas*>(kollekcio[i]) != nullptr)
		{
			osszesertek += dynamic_cast<Lakas*>(kollekcio[i])->osszesKoltseg();
		}
		if (dynamic_cast<Garazs*>(kollekcio[i]) != nullptr)
		{
			osszesertek += dynamic_cast<Garazs*>(kollekcio[i])->osszesKoltseg();
		}
	}
	return osszesertek;
}