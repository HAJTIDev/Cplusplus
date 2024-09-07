#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream input("przyklad.txt");
//ifstream input("liczby.txt");
ofstream output("wynik.txt");
ofstream output2("trojki.txt");
string line;

int rozne(int num){
    int k=2, rozna, l=0 ;

    while(num>1){
        while(num%k==0){
                num/=k;
                if(k!=rozna){
                    rozna=k;
                    l++;
                }
            }
            ++k;
    }
        return l;
}

int rozklady(int num){
    int k=2, m=0;

        while(num>1){
            while(num%k==0){
                num/=k;
                m++;
            }
                ++k;
        }
        return m;
    }

void Zad_1() {
    int k = 0;
    string pierwsza;

    for (int i=0; i < 200; i++) {
        input >> line;
        if (line[0] == line[line.length()-1]) {
            if (k == 0) pierwsza = line;
            k++;
        }
    }
    cout<< "zad 1 "<<endl;
    cout << "Takie same: " << k << "\nPierwsza to: " << pierwsza << endl << endl;
    output << "Takie same: " << k << "\nPierwsza to: " << pierwsza << endl << endl;
}

void Zad_2() {
    int number, numer, n, max = 0;

    input.seekg(0);
    cout<< "zad 2 "<<endl;
    for (int i=0; i < 200; i++) {
        input >> number;
        n = rozklady(number);
        if (n > max) {
            max = n;
            numer = number;
        }

    }

    input.seekg(0);
    for (int j=0; j<200; j++){
        input >> number;
        n = rozklady(number);
        if (n==max) {
            numer= number;
            cout   << "liczba " << number << " ma najwiecej czynnikow "<<  max << endl<< endl;
            output << "liczba " << numer  << " ma najwiecej czynnikow "<<  max << endl<< endl;
        }
    }
}

void Zad_2_1() {
    int number, numer, n, max = 0;

    input.seekg(0);
    for (int i=0; i < 200; i++) {
        input >> number;
        n = rozne(number);
        if (n > max) {
            max = n;
            numer = number;
        }

    }
    cout <<"liczba " <<numer << " ma najwiecej unikalnych czynnikow "<<  max << endl;
    output <<"liczba " <<numer << " ma najwiecej unikalnych czynnikow "<<  max << endl;
}

void zad3() {
 int tab[200], wynik=0;
    input.seekg(0);

    for(int i=0; i<200; i++) input >> tab[i];

    sort(tab, tab+200);

    for(int i=0; i<200; i++){
        for(int j=i+1; j<200; j++){
            for(int k=j+1; k<200; k++){
                if(tab[i]!=tab[j] && tab[j]!=tab[k] && tab[j]%tab[i]==0 && tab[k]%tab[j]==0){
                    wynik++;
                    output2 << tab[i] << " " << tab[j] << " " << tab[k] << endl;
                    }
                }
            }
        }

    cout << "Zad 3" << endl;
    cout << "trojki " << endl;
    cout << wynik << endl;
}

void zad3_1() {
    int wynik = 0, r, tab[200];

    input.seekg(0);

    for(int i=0; i<200; i++) input >> tab[i];

    sort(tab, tab+200);

    for (int i=0; i<200; i++){
        for(int j=i+1; j<200; j++){
            for(int k=j+1; k<200; k++){
                input.seekg(0);
                for(int l=k+1; l<200; l++){
                    for(int m=l+1; m<200; m++){
                        if (tab[i]!=tab[j] && tab[j]!=tab[k] && tab[k]!=tab[l] && tab[j]%tab[i]==0&& tab[k]%tab[j]==0&& tab[l]%tab[k]==0&& tab[m]%tab[l] == 0)
                        {
                            wynik++;
                            output2 << tab[i] << " " << tab[j] << " " << tab[k] << " " << tab[l] << " " << tab[m] << endl;
                        }
                    }
                }
            }
        }
    }
    cout<< "piatki" << endl;
    cout << wynik << endl;
}

int main() {
    //input.close(); input.open("liczby.txt");

    Zad_1();
    Zad_2();
    Zad_2_1();
    zad3();
    zad3_1();

  //input.close();
  //output.close();
  //output2.close();
}
