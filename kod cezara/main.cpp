#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*string cezar1(string text, char shift) {
    unsigned char c;

    for (int i=0; i < text.length(); i++) {
        c = text[i];
        //cout << c << "-";
        if (c >= 'A' && c <= 'Z') {
            //cout << c - 'A' + shift;
            c = (c - 'A' + shift) % 26 + 'A';   //  w³aœciwe szyforwanie
        }
        //cout << c << " ";
        text[i] = c;
    }
    return text;
}
*/
string cezar(string text, unsigned int shift) {
    unsigned int c;

    for (int i=0; i < text.length(); i++) {
        c = text[i];
        if (c >= 'A' && c <= 'Z')
            c = (c - 'A' + shift) % 26 + 'A';   //  wlasciwe szyforwanie
        text[i] = c;
    }
    return text;
}

void zad6_1(){
    string line;
    ifstream input("dane_6_1.txt");
    ofstream output("wyniki_6_1.txt");

    if (!input.is_open())
        cerr << "Input file error!\n";
    if (!output.is_open())
        cerr << "Output file error!\n";

    cout << "zadanie 6.1" << endl;
    for (int i=0; i<100;i++){
        input >> line;
        output << cezar(line, 107) << endl;
    }

    input.close();
    output.close();
}

void zad6_2(){
    char litera, litera2;
    int klucz, dlugosc, numer;
    string slowo, szyfr;
    ifstream input("dane_6_2.txt");
    ofstream output("wyniki_6_2.txt");

    if(!input.is_open())
        cerr<<"cos zle";
    if(!output.is_open())
        cerr<<"cos zle";

    for (int i=0; i < 3000; i++) {
        input >> slowo;
        input >> klucz;
        dlugosc = slowo.size();
        szyfr = "";
        klucz %= 26;

        for (int j=0; j < dlugosc; j++) {
            litera = slowo[j];
            numer = litera;
            numer -= klucz;
            if (numer < 65) numer += 26;
            litera2 = numer;
            szyfr += litera2;
        }
    cout << slowo << '-' << szyfr << endl;
    output << slowo << '-' << szyfr << endl;
    }
}

void zad6_3() {
    int klucz;
    string s1, s2;
    ifstream input("dane_6_3.txt");
    ofstream output("wyniki_6_3.txt");

    for(int i; i<3000; i++){
            input >>s1;
            input >>s2;

    //  określenie wartości klucza:
    klucz = s2[0] - s1[0];
    if (klucz < 0) klucz +=26;
    if (cezar(s1, klucz) != s2) {
        cout   << s1 << '-' << s2 << endl;
        output << s1 << '-' << s2 << endl;
    }
        }

}

int main(){

    int zadanie;

    cout << "ktore zadanie? " << endl;
    cin  >> zadanie;

    if (zadanie==1) zad6_1();
    if (zadanie==2) zad6_2();
    if (zadanie==3) zad6_3();

    return 0;
}
