#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;




void zad1(){
float a, b, c, d, x1, x2, x;
    cout << "a,b,c " << endl;
    cin  >> a;
    cin>>b;
    cin>>c;
    if (a==0) {
        cout<<"koniec. nie da sie";
    }
    d = b*b - 4*a*c;
   if(d >0)
    {
        cout<<"To rownanie moze miec dwa rozwiazania"<<endl;
        x1 = (-b - sqrt(d)) /(2*a);
        cout<<x1<<endl;
        cout<<"Lub ";
        x2 = (-b + sqrt(d)) /(2*a);
        cout<<x2;
    }
    else if(d == 0)
    {
       x = -b /(2*a);
        cout<<"Rozwiazanie to = "<<x;
    }
    else if(d<0)
    {
        cout<<"To dzialanie nie ma rozwiazania";
        }
    }
void zad2(){
float celcjusz, Farenheit,i,odpowiedz;
    i=0;
    while(i==0){
    cout<< "podaj stopnie celcjusza";
    cin >> celcjusz;
    Farenheit= 32.0 + 9.0/5.0 *celcjusz;
    cout<< "tyle to stopni farenheitow" <<Farenheit <<endl;
    cout << "czy chcesz dalej liczyc?" <<endl;
    cin >> odp;

    if(odp=="N") i=1;
    }
}
void zad3(){
float n,licznik, liczba, suma,n1,srednia;
string odp;

    ofstream dane ("dane.txt");
    cout<<"ile liczb ?"<< endl;
    cin>> n;
    dane << "ile liczb " << n << endl;
    n1=n;
    while(n>0){{
        licznik = licznik+1;
        cout<<"Podaj liczbe "<<endl;
        cin>>liczba;
        dane <<"Liczba "<<licznik<<" = "<<liczba<<endl;
        suma = suma + liczba;
        n = n- 1;
    }
    srednia = suma / n1;
    dane <<"Srednia to "<<srednia<<endl;
    cout<<"Srednia to "<<srednia << endl;
    dane.close();
    }
}


int main() {

    cout<<"Ktore zadanie?"<<endl;
    cout<<"1 = rownanie kwadratowe"<<endl;
    cout<<"2 = Celsjusz na Farenheita"<<endl;
    cout<<"3 = Srednia arytmetyczna z n liczb"<<endl;
    cin>>odpowiedz;
    if(odpowiedz == 1) zad1();
    else if(odpowiedz == 2) zad2();
    else if(odpowiedz == 3) zad3();
    return 0;

}
