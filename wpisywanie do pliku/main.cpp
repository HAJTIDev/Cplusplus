#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream dane ("dane.txt");
    string imie;
    string nazwisko;

    cout<< "podaj imie" << endl;
    cin >> imie;
    cout << "podaj nazwisko " << endl;
    cin >> nazwisko;

    cout << "nazywam sie " << imie << " " << nazwisko;
    dane << "nazywam sie " << imie << " " << nazwisko;


    return 0;
}
