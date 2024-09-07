#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Pozycja{
    private:
    string nazwatowaru;
    float ilesztuk, cena;
    public:
    friend class zamowienie;
        Pozycja(){
        nazwatowaru="";
        ilesztuk=0;
        cena=0;
        }
        Pozycja(string nazwa,float ile, float ceny){
            nazwatowaru=nazwa;
            ilesztuk=ile;
            cena=ceny;
        }
        double obliczWartosc(){
        return ilesztuk*cena;
        }
        double obliczWartoscRabat(){
            float rabat=1,razem;
            if(ilesztuk>5 && ilesztuk<10)rabat=5;
            else if(ilesztuk>10 && ilesztuk<20)rabat=10;
            else if(ilesztuk>20)rabat=20;
            rabat=100-rabat;
            rabat=rabat/100;
            razem=obliczWartosc()*rabat;
            return razem;
        }
        void info(){
            string informacja,cen,szt,razem;
            stringstream l,m,n;
            l<<ilesztuk;
            m<<cena;
            n<<obliczWartosc();
            cen=m.str();
            szt=l.str();
            razem=n.str();
            int k,j;
                if(nazwatowaru.length()<=20 && cen.length()<=10 && l.str().length()<=4 && n.str().length()<=10){
                informacja+=nazwatowaru;
                if( nazwatowaru.length()>5)k=nazwatowaru.length()-5;
                j=20-k;
                for(int i=0;i<j;i++)informacja+=' ';
                k=0;
                j=0;

                informacja+=cen;
                informacja+=" zl";
                if(cen.length()>1) k=cen.length()-1;
                j=10-k;
                for(int i=0;i<j;i++)informacja+=' ';
                k=0;
                j=0;

                informacja+=szt;
                informacja+=" szt";
                if(szt.length()>1) k=szt.length()-1;
                j=10-k;
                for(int i=0;i<j;i++)informacja+=' ';
                informacja+=razem;
                informacja+=" zl";
                cout<<informacja<<endl;

            }
            else cout<<"wartosci sa zle wpisane"<<endl;
        }
};
class zamowienie{
private:
    Pozycja pozycje[15];
    int ileDodanych,maksrozmiar;
public:
    friend class Pozycja;
    zamowienie(){
    maksrozmiar=10;
    ileDodanych=0;
    }
    zamowienie(int maks){
        maksrozmiar=maks;
        ileDodanych=0;
    }
    void dodajPozycje(Pozycja p){
        int c=0,l;
        if(ileDodanych<maksrozmiar) {
            if(ileDodanych==0){
            pozycje[ileDodanych]=p;
            ileDodanych++;
            }
            else{
                for(int i=0;i<ileDodanych;i++){
                    if(pozycje[i].nazwatowaru==p.nazwatowaru){
                            c++;
                            l=i;
                    }
                }
                if(c==1) pozycje[l].ilesztuk+=p.ilesztuk;
                else{
                    pozycje[ileDodanych]=p;
                    ileDodanych++;
                }
            }
        }
        else cout<<"juz jest za duzo wartosci"<<endl;
    }
    void obliczwartosc(){
        double razem=0,rabatem=0;
        for(int i=0;i<ileDodanych;i++){
            razem+=pozycje[i].obliczWartosc();
            rabatem+=pozycje[i].obliczWartoscRabat();
        }
    cout<<endl<<"razem: "<<razem<<"zl"<<endl;
    cout<<"razem z naliczonym rabatem: "<<rabatem<<"zl"<<endl;
    }
    void wypisz(){
    for (int i=0; i<ileDodanych;i++) pozycje[i].info();
            obliczwartosc();
    }
    void edytujPozycje(int indeks){
        string nazwa;
        float nowacena,nowailosc;
        cout<<"podaj nowe wartosci do towaru nr "<<indeks<<endl;
        cout<<"nazwa ";
        cin>>nazwa;
        cout<<"cena ";
        cin>>nowacena;
        cout<<"ilosc ";
        cin>>nowailosc;
        pozycje[indeks].nazwatowaru=nazwa;
        pozycje[indeks].cena=nowacena;
        pozycje[indeks].ilesztuk=nowailosc;
    }
    void usunPozycje(int indeks){
        for(int i=indeks;i<ileDodanych;i++){
                pozycje[i]=pozycje[i+1];
        }
        ileDodanych-=1;
    }
};
int main(){
    zamowienie z;
    Pozycja a("cukier",5,3.12);
    Pozycja c("cukier",10,3.12);
    Pozycja b("cukierki",4,12);
    z.dodajPozycje(a);
    z.dodajPozycje(b);
    z.dodajPozycje(c);
    z.wypisz();
    a.obliczWartoscRabat();
    z.usunPozycje(1);
    z.wypisz();
    z.dodajPozycje(b);
    z.wypisz();
    z.edytujPozycje(1);
    z.wypisz();

    return 0;
}
