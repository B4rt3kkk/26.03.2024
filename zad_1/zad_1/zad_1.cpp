#include <iostream>
using namespace std;

class Pojazdy {
	public:
		string name_p;
		void prezenracjaPojazdy() {
			cout << "Nazwa pojazdu: " << this->name_p << endl;
		}
};
class Samochody {
	public:
		string name_s;
		void prezenracjaSamochody() {
		cout << "Nazwa Samochodu: " << this->name_s << endl;
		}
};
class Rolnicze:public Samochody, public Pojazdy {
	public:
		string name_r;
		void prezenracjaRolnicze() {
		cout << "Nazwa Rolnicze: " << this->name_r << endl;
		}
};
int main()
{
	Rolnicze rol;
	rol.name_p = "Bizon";
	rol.name_s = "Szybki Bizon";
	rol.name_r = "Wies droga do Bizona";
	rol.prezenracjaPojazdy();
	rol.prezenracjaSamochody();
	rol.prezenracjaRolnicze();

	return EXIT_SUCCESS;
}
