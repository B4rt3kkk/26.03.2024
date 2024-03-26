#include <iostream>
using namespace std;

class Czlowiek {
public:
	string imie;
	string nazwisko;
	void prezentacjaCzlowieka() {
		cout << "Imie i Nazwisko: " << this->imie << this->nazwisko << endl;
	}

};

class Flegmatyk : public Czlowiek {
public:
	string cecha1;
	string cecha2;
	string cecha3;
	void prezentacjaFlegmatyka() {
		cout << "Cecha nr 1: " << this->cecha1 << endl;
		cout << "Cecha nr 2: " << this->cecha2 << endl;
		cout << "Cecha nr 3: " << this->cecha3 << endl;
	}
};

class Choleryk : public Czlowiek {
public:
	string cecha1;
	string cecha2;
	string cecha3;
	void prezentacjaCholeryka() {
		cout << "Cecha nr 1: " << this->cecha1 << endl;
		cout << "Cecha nr 2: " << this->cecha2 << endl;
		cout << "Cecha nr 3: " << this->cecha3 << endl;
	}
};

class Sagwinik : public Czlowiek {
public:
	string cecha1;
	string cecha2;
	string cecha3;
	void prezentacjaSagwinika() {
		cout << "Cecha nr 1: " << this->cecha1 << endl;
		cout << "Cecha nr 2: " << this->cecha2 << endl;
		cout << "Cecha nr 3: " << this->cecha3 << endl;
	}
};

class Melachonik : public Czlowiek {
public:
	string cecha1;
	string cecha2;
	string cecha3;
	void prezentacjaMelachonika() {
		cout << "Cecha nr 1: " << this->cecha1 << endl;
		cout << "Cecha nr 2: " << this->cecha2 << endl;
		cout << "Cecha nr 3: " << this->cecha3 << endl;
	}
};


int main()
{
	string imie, nazwisko;
	int typosobowosci;

	cout << "Podaj imie = "; cin >> imie;
	cout << "Podaj nazwisko = "; cin >> nazwisko;
	cout << "Podaj typ osobowosci od 1 do 4 = "; cin >> typosobowosci;

	Czlowiek cz;
	cz.imie = imie;
	cz.nazwisko = nazwisko;
	Choleryk czlowiek1;
	Flegmatyk czlowiek2;
	Sagwinik czlowiek3;
	Melachonik czlowiek4;


	switch (typosobowosci)
	{
	case 1:
		czlowiek1.cecha1 = "Szybko gada";
		czlowiek1.cecha2 = "typ maczo";
		czlowiek1.cecha3 = "SIGMA i umie zrobic 90 w fortnite";
		czlowiek1.prezentacjaCzlowieka();
		czlowiek1.prezentacjaCholeryka();
		break;
	case 2:
		czlowiek2.cecha1 = "Wolno gada";
		czlowiek2.cecha2 = "nie typ maczo";
		czlowiek2.cecha3 = "CZASAMI DOCHODZI DO SIGMY";
		czlowiek2.prezentacjaCzlowieka();
		czlowiek2.prezentacjaFlegmatyka();
		break;
	case 3:
		czlowiek3.cecha1 = "gada";
		czlowiek3.cecha2 = "typ uniwersalny";
		czlowiek3.cecha3 = "ROWNIEZ CZASAMI SIGMA";
		czlowiek3.prezentacjaCzlowieka();
		czlowiek3.prezentacjaSagwinika();
		break;
	case 4:
		czlowiek4.cecha1 = "Wolno gada";
		czlowiek4.cecha2 = "nie typ maczo";
		czlowiek4.cecha3 = "NIE DOSZEDL DO SIGMY";
		czlowiek4.prezentacjaCzlowieka();
		czlowiek4.prezentacjaMelachonika();
		break;
	default:
		cout << "Brak osobowosci";
		break;
	}


	return EXIT_SUCCESS;
}


