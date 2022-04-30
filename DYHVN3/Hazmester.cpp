#include "Hazmester.h"
using namespace std;

void Hazmester::Karbantart(string path) {
	ifstream inputFile(path);
	Tarsashaz tarsashaz(2,1);
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			string sor;
			getline(inputFile, sor);
			if (Split(sor, 0)=="Alberlet")
			{

				Lakas* p = new Alberlet(stoi(Split(sor, 1)), stoi(Split(sor, 2)), stoi(Split(sor, 3)));
				tarsashaz.LakasHozzaad(p);

			}
			else if (Split(sor, 0) == "CsaladiApartman") {

				Lakas* p = new CsaladiApartman(stoi(Split(sor, 1)), stoi(Split(sor, 2)), stoi(Split(sor, 3)));
				tarsashaz.LakasHozzaad(p);
			
			}else if (Split(sor, 0) == "Garazs") {
				if (Split(sor, 3)=="futott")
				{
					Garazs* p = new Garazs(stoi(Split(sor, 1)), stoi(Split(sor, 2)),true);
					tarsashaz.GarazsHozzaad(p);
				}
				else
				{
					Garazs* p = new Garazs(stoi(Split(sor, 1)), stoi(Split(sor, 2)), false);
					tarsashaz.GarazsHozzaad(p);
				}
			}
		}
	}
	inputFile.close();
	cout << "Tarsashaz erteke: " << tarsashaz.ingatlanErtek() << "Ft." <<endl;

	dynamic_cast<Alberlet*>(tarsashaz.kollekcio[0])->bekoltozik();
	cout << "Alberlet lakok szama: " << dynamic_cast<Alberlet*>(tarsashaz.kollekcio[0])->lakokSzama() << std::endl;
	cout << "Mennyibe kerul 1 honapra? " << dynamic_cast<Alberlet*>(tarsashaz.kollekcio[0])->mennyibeKerul(1) << std::endl;
	cout << "Lefoglaljuk 1 honapra" << std::endl;
	dynamic_cast<Alberlet*>(tarsashaz.kollekcio[0])->lefoglal(1);
	cout << "Alberlet toString: " << dynamic_cast<Alberlet*>(tarsashaz.kollekcio[0])->toString() << std::endl;
	dynamic_cast<CsaladiApartman*>(tarsashaz.kollekcio[1])->bekoltozik();
	dynamic_cast<CsaladiApartman*>(tarsashaz.kollekcio[1])->bekoltozik();
	dynamic_cast<CsaladiApartman*>(tarsashaz.kollekcio[1])->gyerekSzuletik();
	cout << "Csaladi apartman toString: " << dynamic_cast<CsaladiApartman*>(tarsashaz.kollekcio[1])->toString() << std::endl;
	cout << "Garazs: ";
	dynamic_cast<Garazs*>(tarsashaz.kollekcio[2])->lefoglal(2);
	dynamic_cast<Garazs*>(tarsashaz.kollekcio[2])->autoKiBeAll();
	cout << dynamic_cast<Garazs*>(tarsashaz.kollekcio[2])->toString();
}
string Hazmester::Split(string sor,int idx) {
	vector<string> szavak;
	string aktualis = "";
	for (size_t i = 0; i < sor.length(); i++)
	{
		if (sor[i]==' ')
		{
			szavak.push_back(aktualis);
			aktualis = "";
		}
		else
		{
			aktualis += sor[i];
		}
	}
	szavak.push_back(aktualis);
	return szavak[idx];
}