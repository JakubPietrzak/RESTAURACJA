#include<iostream>

using namespace std;
class Szef_kuchni {

public:
	int NumerIDPracownika;
	string ImieSzefaKuchni;
	string NazwiskoSzefaKuchni;
};

class Kelner
{
public:
	int NumerIDPracownika;
	string ImieKelnera;
	string NazwiskoKelnera;
};

class Zamowienie
{
public:
	int NumerIDZamowienia;
	//date TerminZamowienia;
	int NumerKelnetaTegoZamowienia;
	int KolejnoscZamowienia;
	double ZnizkaNaZamowienie;
	string StatusZamowienia;
	string RodzajPlatnosciZaZamowienie;
	void PrzygotowanieZamowienia();
	void SerwowanieZamowienia();
};

class Rachunek
{
	int NumerIDRachunku;
	//Data wystawienia rachunku
	string PozycjeZamowienia;
	double CalkowityKosztZamowienia;
	void PrzekazanieRachunku();
	double OdebranieZaplaty();
};

class Napoje {

public:
	int NumerIDNapoju;
	string NazwaNapoju;
	double CenaNapoju;
};


class Dostawca {

public:
	int NumerIDPracownika;
	string ImieDostawcy;
	string NazwiskoDostawcy;
};



class Manager {

public:
	int NumerIDPracownika;
	string ImieManagera;
	string NazwiskoManagera;
};

class Posilki
{
public:
	int NumerIDPosilku;
	string NazwaPosilku;
	double CenaPosilku;
	bool PrzygotowaniePosilku();
};

class Magazyn
{
public:
	int NumerIdProduktu;
	string NazwaProduktu;
	double CenaProduktu;
	void SprawdzenieStanuZaopatrzenia();
	void ZlozenieZamowienia();
	void DostarczenieZamowienia();
	void ZmianaStanuMagazynu();
};

int main()
{
	cout << "Restaurant project by: Micha³ Nycz, Jakub Pietrzak, Artur Pietrzkiewicz" << endl;
}