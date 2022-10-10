#include<iostream>
#include<cstring>
using namespace std;
class Klijenti {
public:
	string Emri;
	string Mbiemri;
	int Mosha{};
	string Addres;
	int Para;
	void lpara() {
		cout << "\nParat e Klijentit: $ ";
		cin >> Para; cout << endl;
	}
	void form() {
		cout << "\nEmri i Klijentit: " << Emri << endl;
		cout << "Mbiemri i Klijentit: " << Mbiemri << endl;
		cout << "Mosha: " << Mosha << endl;
		cout << "Adresa e Klijentit: " << Addres << endl;
		cout << "Parat e Klijentit: " << Para << endl;
	}
	
};
class kredi :public Klijenti {
public:
	void Kred() {
		int par;

		if (Mosha <= 25)
		{
			cout << "\nMund te mare kredi Klijenti- " << Emri << endl;
			par =10000;
			Para += par;
			cout << "Shuma e kredis eshte -" << Para << "$" << endl;
		}
		else if (Mosha <= 35) {
			cout << "\nMund te mare kredi Klijenti- " << Emri << endl;
			par = 20000;
			Para += par;
			cout << "Shuma e kredis eshte -" << Para << "$" << endl;
		}
		else if (Mosha <= 50)
		{
			cout << "\nMund te mare kredi Klijenti- " << Emri << endl;
			par = 30000;
			Para += par;
			cout << "Shuma e kredis eshte -" << Para << "$" << endl;
		}
		else if (Mosha <= 100)
		{
			cout << "\nMund te mare kredi Klijenti- " << Emri << endl;
			par = 45000;
			Para += par;
			cout << "Shuma e kredis eshte -" << Para << "$" << endl;
		}
	}
};
class Pkred :public kredi {
public:
	void Kred() {
		int par{};

		if (Mosha <= 25)
		{
			cout << "\nMund te mare kredi Klijenti- " << Emri << endl;
			par = 20000;
			Para += par;
			cout << "Shuma e kredis eshte -" << Para << "$" << endl;
		}
		else if (Mosha <= 35) {
			cout << "\nMund te mare kredi Klijenti- " << Emri << endl;
			par = 30000;
			Para += par;
			cout << "Shuma e kredis eshte -" << Para << "$" << endl;
		}
		else if (Mosha <= 50)
		{
			cout << "\nMund te mare kredi Klijenti- " << Emri << endl;
			par = 40000;
			Para += par;
			cout << "Shuma e kredis eshte -" << Para << "$" << endl;
		}
		else if (Mosha <= 100)
		{
			cout << "\nMund te mare kredi Klijenti- " << Emri << endl;
			par = 55000;
			Para += par;
			cout << "Shuma e kredis eshte -" << Para << "$" << endl;
		}
	}
};
class Modele {
public:
	string marka;
	string model;
	int cmim{};
	virtual void mak() = 0;
	
};
class FMak:public Modele{
public:
	void mak() {
		cout << "\nMakina Familjare:\n";
		cout << "Marka: " << marka << endl;
		cout << "Modeli: " << model << endl;
		cout << "Cmimi: " << cmim << "$" << endl;
	}
};
class SMak :public Modele {
public:
	void mak() {
		cout << "\nMakina Sportive:\n";
		cout << "Marka: " << marka << endl;
		cout << "Modeli: " << model << endl;
		cout << "Cmimi: " << cmim<< "$" << endl;
	}
};
class OMak :public Modele {
public:
	void mak() {
		cout << "\nMakina Off-Road:\n";
		cout << "Marka: " << marka << endl;
		cout << "Modeli: " << model << endl;
		cout << "Cmimi: " << cmim << "$" << endl;
	}
};
void Firma(string e, string a) {
	cout << endl << e << a << endl;
}
class Kontakt {
private:
	string add;
	string firma;
	string num;
	string thx;
public:
	Kontakt(string f, string a, string n, string t) {
		add = a;
		firma = f;
		num = n;
		thx = t;
		cout <<"\n\t   Firma: "<< f <<"  Addresa: "<< a << "  Kontakt numri: " << n << endl << t;
}
};
int main() {
	int n;
	FMak fm[10];
	SMak sm[10];
	OMak om[10];
	fm[0].marka = "Volkswagen";
	fm[0].model = "Golf";
	fm[0].cmim = 29000;
	fm[1].marka = "Ford";
	fm[1].model = "Focus";
	fm[1].cmim = 30000; 
	fm[2].marka = "Skoda";
	fm[2].model = "Karoq";
	fm[2].cmim = 35000; 
	fm[3].marka = "Mercedes-Benz";
	fm[3].model = "A-Class";
	fm[3].cmim = 38000; 
	fm[4].marka = "Peugeot";
	fm[4].model = "3008";
	fm[4].cmim = 41000; 
	fm[5].marka = "Skoda";
	fm[5].model = "Scala";
	fm[5].cmim = 25000;
	sm[0].marka = "Toyota";
	sm[0].model = "Supra";
	sm[0].cmim = 70000;
	sm[1].marka = "Chevy";
	sm[1].model = "Corvette";
	sm[1].cmim = 90000;
	sm[2].marka = "BMW";
	sm[2].model = "m2";
	sm[2].cmim = 80000;
	sm[3].marka = "Chevy";
	sm[3].model = "Camaro";
	sm[3].cmim = 60000;
	sm[4].marka = "Ford";
	sm[4].model = "Mustang";
	sm[4].cmim = 80000;
	sm[5].marka = "Audi";
	sm[5].model = "R8";
	sm[5].cmim = 100000;
	om[0].marka = "Land Rover";
	om[0].model = "Defender";
	om[0].cmim = 45000;
	om[1].marka = "Jeep";
	om[1].model = "Wrangler";
	om[1].cmim = 40000;
	om[2].marka = "Toyota";
	om[2].model = "Lan Cruiser";
	om[2].cmim = 38000;
	om[3].marka = "Mercedes-Benz";
	om[3].model = "G-Class";
	om[3].cmim = 90000;
	om[4].marka = "Ford";
	om[4].model = "Ranger Raptor";
	om[4].cmim = 25000;
	om[5].marka = "Ariel";
	om[5].model = "Nomad";
	om[5].cmim = 40000;
	Klijenti K[1]; 
	Pkred Pk;
	kredi kr;
	
	Firma("\t\t\t\t\t---AUTO SALLON---", "\n\t\t\t\t\t       Goni\n");
	for (int i = 0; i < 1; i++) {
		cout << "\nEmri i Klijentit:";
		cin >> K[i].Emri;
		cout << "\nMbiemri i Klijentit:";
		cin >> K[i].Mbiemri;
		cout << "\nMosha e Klijentit:";
		cin >> K[i].Mosha;
		cout << "\nAdresa e Klijentit:";
		cin >> K[i].Addres;
		K[i].lpara();
		

	}
menu:	
		cout << "\n------Zgjedhni llojin e makinen------\n";
		cout << "1.Makina Familjare\n";
		cout << "2.Makina Sportive\n";
		cout << "3.Makina Off-Road\n";
		cout << "Zgjedhni njeren prej opcioneve(1, 2, 3 dhe per te daluar kerkimin 0):\n";
		cin >> n;

		switch (n) {
		case(1): {
			for (int i = 0; i < 1; i++) {
				K[i].form();
			}
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 5; j++) {
					if (K[i].Para >= fm[j].cmim) {
						cout << "Makina e pershtatshme per Klijentin" << K[i].Emri << " eshte:" << endl;
						fm[j].mak();
					}
				}
			}
			break;
		}
		case(2): {
			for (int i = 0; i < 1; i++) {
				K[i].form();
			}
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 5; j++) {
					if (K[i].Para >= sm[j].cmim) {
						cout << "Makina e pershtatshme per Klijentin" << K[i].Emri << " eshte:" << endl;
						sm[j].mak();
					}
				}
			}
			break;
		}
		case(3): {
			for (int i = 0; i < 1; i++) {
				K[i].form();
			}
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 5; j++) {
					if (K[i].Para >= om[j].cmim) {
						cout << "Makina e pershtatshme per Klijentin" << K[i].Emri << " eshte:" << endl;
						om[j].mak();
					}
				}
			}
			break;
		}
		}
		if (n == 1) {
			goto menu;
		}
		else if (n ==2 ) {
			goto menu;
		}
		else if (n == 3) {
			goto menu;
		}
		int p;
		cout << "Nese jeni te interesuar per kredi plotsoni pytjen:";
		cout << "A jeni te punsuar(1.po ose 2.jo):";
		cin >> p;
		if (p == 1) {
				Pk.Kred();
		}
		else if (p == 2) {
				kr.Kred();		
		}
	Kontakt k("Goni", "Ilindenska 32, Skopje ", "+389 72760838", "\t\t\t\t\tNa vizitoni perseri");
	cin.get();
	return 0;
}