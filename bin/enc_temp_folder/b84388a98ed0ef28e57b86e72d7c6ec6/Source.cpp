#include <iostream>
#include <string>

using namespace std;

class Zamowienie {
private:
	string nazwa_produktu;
	float cena_produktu;
	string data_zakupu;
	int liczba_sztuk;
public:
	void zapisz_dane() {
		this->nazwa_produktu = this->podaj_nazwe_produktu();
		this->cena_produktu = this->podaj_cene();
		this->data_zakupu = this->podaj_date_zakupu();
		this->liczba_sztuk = this->podaj_liczbe_sztuk();
	}
	void wyswietl_dane() {
		cout << endl << "Produkt:      " << this->nazwa_produktu;
		cout << endl << "Cena:         " << this->cena_produktu;
		cout << endl << "Data zakupu:  " << this->data_zakupu;
		cout << endl << "Liczba sztuk: " << this->liczba_sztuk;
		cout << endl << "Koszt:        " << this->podaj_koszt() << endl << "__________________" << endl;
	}
	string podaj_nazwe_produktu() {

		string nowa_nazwa_produktu;
		cout << "Podaj nazwê produktu (string): ";
		cin >> nowa_nazwa_produktu;
		return nowa_nazwa_produktu;
	}
	float podaj_cene() {

		float nowa_cena;
		cout << "Podaj cenê (float): ";
		cin >> nowa_cena;
		return nowa_cena;
	}
	string podaj_date_zakupu() {
		string nowa_data_zakupu;
		cout << "Podaj datê zakupu (string): ";
		cin >> nowa_data_zakupu;
		return nowa_data_zakupu;
	}
	int podaj_liczbe_sztuk() {

		int nowa_liczba_sztuk;
		cout << "Podaj liczbê sztuk (int): ";
		cin >> nowa_liczba_sztuk;
		return nowa_liczba_sztuk;
	}
	float podaj_koszt() {

		float cena, koszt, ilosc;
		cena = this->cena_produktu;
		ilosc = (float)this->liczba_sztuk;
		koszt = cena * ilosc;
		return koszt;
	}
};

int main() {

	Zamowienie pierwsze_zamowienie, drugie_zamowienie;
	pierwsze_zamowienie.zapisz_dane();
	pierwsze_zamowienie.wyswietl_dane();
	drugie_zamowienie.zapisz_dane();
	drugie_zamowienie.wyswietl_dane();

	system("pause");
	return 0;
}