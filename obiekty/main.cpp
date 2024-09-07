#include <iostream>
#include <fstream>

using namespace std;

class Adres {
private:
    string miejscowosc, ulica, zip, poczta;
    unsigned short nrDomu, nrMieszkania;

public:
    Adres() {};
    Adres(string mie, string ul, short nrD, short nrM, string zi, string pocz) {
        miejscowosc = mie;
        ulica = ul;
        nrDomu = nrD;
        nrMieszkania = nrM;
        zip = zi;
        poczta = pocz;
    }

    void wypisz() {
        cout << miejscowosc << ' ' << ulica << ' ' << nrDomu << '/' << nrMieszkania << ' ' << zip << ' ' << poczta;
    }
};

//struct data {
class data {
    private:    //  kwantyfikatory dostępu:
    char rok, mc, dzien;

    int ble() {
        return rok*mc*dzien;
    }

    protected:
    public:

    data() {        //  konstruktor bezargumentowy
        //cout << "jam jest konstruktor klasy data" << endl;
        dzien = 1;
        mc = 1;
        rok = 10;
    }

    data(int dzien) {
        if (dzien > 31 || dzien < 1) {
            cout << "ups, cos nie tak z wartoscia dnia, popraw se!\n";
            this->dzien = 1;
        }
        else this->dzien = dzien;
    }

    data(int dz, int m, int rk) {
        dzien = dz;
        mc = m;
        rok = rk;
    }

    void wypisz() {
        cout << int(dzien) << '.' << int(mc) << '.' << "20" << int(rok);
    }
};

//struct osoba {
class osoba {
    string imie, nazwisko;//, adres;
    Adres adres;
    unsigned int PESEL;
    data dataUrodzenia;
    char plec;

public:
    osoba() {}
    osoba(string im, string na, Adres a, unsigned PE, data d, char p) {
        imie = im;
        nazwisko = na;
        adres = a;
        PESEL = PE;
        dataUrodzenia = d;
        plec = p;
    }

    void wypisz() {
        cout << imie << ' ' << nazwisko << ' ';
        //wypisz(o.adres);
        adres.wypisz();
        cout << ' ' << PESEL << ' ';
        //wypisz(o.dataUrodzenia);
        dataUrodzenia.wypisz();   //  method
        cout << '-' << plec << " asci = " << int(plec) << endl;
    }
};

/* void wypisz(Adres a) {
    cout << a.miejscowosc << ' ' << a.ulica << ' ' << a.nrDomu << '/' << a.nrMieszkania << ' ' << a.zip << ' ' << a.poczta;
} */

/* void wypisz(data d) {
    cout << int(d.dzien) << '.' << int(d.mc) << '.' << "20" << int(d.rok);
} */

/* void wypisz(osoba o) {
    //cout << o.imie << ' ' << o.nazwisko << ' ' << wypisz(o.adres) << ' ' << o.PESEL << ' ' << wypisz(o.dataUrodzenia) << '-' << o.plec << " asci = " << int(o.plec) << endl;
    cout << o.imie << ' ' << o.nazwisko << ' ';
    //wypisz(o.adres);
    o.adres.wypisz();
    cout << ' ' << o.PESEL << ' ';
    //wypisz(o.dataUrodzenia);
    o.dataUrodzenia.wypisz();   //  method
    cout << '-' << o.plec << " asci = " << int(o.plec) << endl;
}*/

int main() {
    //int i, j, k;                    //  3 zmienne
    osoba ja("Daria", "Robak", Adres("Pcim", "Jagielly", 43, 21, "08-110", "Poznan"), 1234567890, data(20, 12, 20), 'K'),
          ty, on, ona, ono;     //  5 zmiennych, a teraz obiektów
    ofstream fs("plik.txt");

    //ja.imie = "Daria";
    //ja.nazwisko = "Robak";
    ///ja.adres = "cos 21/14   05-320 £ód¿";
    //ja.adres.miejscowosc = "Pcim";
    //ja.adres.nrMieszkania = 12;
    //ja.adres.nrDomu = 43;
    //ja.adres.ulica = "ulica";
    //ja.adres.zip = "3213";
    //ja.adres.poczta = "Poznan";
    //ja.PESEL = 1234567890;
    ///ja.adres = Adres("Pcim", "Jagielly", 43, 21, "08-110", "Poznan");
    //ja.dataUrodzenia = "12.34.56";
    //ja.dataUrodzenia.dzien = 20;
    //ja.dataUrodzenia.mc = 12;
    //ja.dataUrodzenia.rok = 20;
    ///ja.dataUrodzenia = data(20, 12, 20);
    //ja.plec = 'K';
    //ja("Daria", "Robak", Adres("Pcim", "Jagielly", 43, 21, "08-110", "Poznan"), 1234567890, data(20, 12, 20), 'K');

    //cout << ja;
    //wypisz(ja);
    //wypisz(ty);
    //wypisz(on);
    ja.wypisz();
    //ty.wypisz();
    //on.wypisz();

    /* data d1(32);
    //wypisz(d1); cout << endl;
    d1.wypisz(); cout << endl;
    data d2(32, 99, 10);
    //wypisz(d2); cout << endl;
    d2.wypisz(); cout << endl; */

    return 0;
}
