#include <iostream>
#include <fstream>

using namespace std;

struct ciag {
    int pierwsza, dlugosc, nwd;
};

int fnwd(int a, int b) {
    cout << a << ' ' << b << " : ";
    while (a!=b)
       if (a>b) a-=b;
       else     b-=a;
    cout << a << endl;
    return a;
}

int main() {
    int liczba1, liczba2, nwd;
    ciag c1, c2;
    ifstream plik("przyklad.txt");
    //ifstream plik("liczby.txt");

    if(!plik.is_open()) {
        cerr << "cos zle";
        return 1;
    }

    cout << fnwd(4, 10);
    plik >> liczba1;
    nwd = liczba1;
    //c1.pierwsza = liczba1;
    //c1.dlugosc  = 1;
    for (int i = 1; i < 21; i++) {
        plik >> liczba2;
        nwd = fnwd(liczba1, liczba2);
        if (nwd != 1) {

        }
        c1.dlugosc++;
        liczba1 = liczba2;
    }

    //c1.start = 3;
    c1.dlugosc = 2;
    c1.nwd = 1;

    c2 = c1;

    cout << "Hello world!" << endl;
    return 0;
}
//  microtec@wp.pl
