#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

bool potega(int liczba, int podstawa) {
    if (liczba == 1) return true;

    div_t wynik;
    do {
        wynik = div(liczba, podstawa);
        //cout << liczba << '/' << podstawa << " = " << wynik.quot << " rem:" << wynik.rem << endl;
        liczba = wynik.quot;
    } while (wynik.rem == 0 && liczba >= podstawa);
    //cout << liczba << endl;

    //if (wynik.rem == 0 && liczba == 1) return true;
    //else                               return false;
    return wynik.rem == 0 && liczba == 1;
}

int silnia(int v) {
    if (v < 2) return 1;
    return v * silnia(v-1);
}

int silniaSum(string s) {
    int sum = 0;

    for (int i=0; i<s.length(); i++)
        sum += silnia(s[i] - '0');

    return sum;
}

int main() {
    unsigned int liczba, ilosc = 0;
    string text;
    stringstream ss;
    //ifstream plik("przyklad.txt");
    ifstream plik("liczby.txt");

    if(!plik.is_open()) {
        cerr << "cos zle";
        return 1;
    }

    //cout << potega(1, 3);

    for (int i = 0; i< 500; i++) {
        plik >> liczba;

        //  Zad.1:
        if (potega(liczba, 3)) ilosc++;

        //  Zad.2:
        ss << liczba;
        ss >> text;
        if (liczba == silniaSum(text))
            cout << liczba << endl;
        ss.clear();
    }

    cout << "ilosc liczb ktore sa potega 3: " << ilosc << endl;

    //plik.seekg(0);      //  powrót do pocz¹tku pliku

    //for (int i = 0; i<500; i++) {
    //    plik >> liczba;
    //}

    //cout << silniaSum("145") << endl;

    plik.close();
    return 0;
}
