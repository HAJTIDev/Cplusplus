#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool czy_pierwsza(int n)
{
	if(n<2)
		return false;

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}
int main()
{
    ifstream plik("przedzialy.txt");
    ofstream odp("wyniki.txt");
    string przed,liczba,k,templiczba,przedzialy[50];
    char z;
    int maks,index=0,licz1,licz2,wier=0,war[50],war2[50],index2=0,maks2=0;

    if(!plik.is_open())cerr<<"coœ Ÿle"<<endl;

    while( !plik.eof()){
        plik>>przed;
        liczba="";
        for(int i=0;i<przed.length();i++){
            if(przed.substr(i,1)=="-")
            liczba+="-";

            k=przed.substr(i,1);
            z=k[0];
            if(isdigit(z))
                liczba+=z;
            if(przed.substr(i,1)==","){
                templiczba=liczba;
                liczba="";
            }
        }
        licz1=stoi(templiczba);
        licz2=stoi(liczba);
        if(przed[0]=='('){
            if(przed[przed.length()-1]==')'){
                for(int i=licz1+1;i<licz2;i++){
                    if(i%2!=0) index++;
                    if(czy_pierwsza(i))index2++;
                }
            }
            else{
                for(int i=licz1+1;i<=licz2;i++){
                    if(i%2!=0)index++;
                    if(czy_pierwsza(i))index2++;
                }
            }
        }
        else{
            if(przed[przed.length()-1]==')'){
                for(int i=licz1;i<licz2-1;i++){
                    if(i%2!=0)index++;
                     if(czy_pierwsza(i))index2++;
                }
            }
            else{
                for(int i=licz1;i<licz2+1;i++){
                    if(i%2!=0)index++;
                     if(czy_pierwsza(i))
                        index2++;
                }
            }
        }
        if(index>maks)maks=index;
        if(index2>maks2)maks2=index2;

        war[wier]=index;
        przedzialy[wier]=przed;
        war2[wier]=index2;

        index=0;
        wier++;
        index2=0;
    }
    cout<<"Zad 1.1"<<endl;
    cout<<"najwieksza wartosc to " <<maks<<endl;
    cout<<"we wierszach nr: ";
    odp<<"Zad 1.1"<<endl;
    odp<<"najwieksza wartosc to " <<maks<<endl;
    odp<<"we wierszach nr: ";
    for (int i=0;i<50;i++){
        if(war[i]==maks){
            cout<<i+1<<" ";
            odp<<i+1<<" ";
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"Zad 1.2"<<endl;
    cout<<"najwieksza wartosc to " <<maks2<<endl;
    cout<<"w przedzialach: "<<endl;

    odp<<endl;
    odp<<endl;
    odp<<"Zad 1.2"<<endl;
    odp<<"najwieksza wartosc to " <<maks2<<endl;
    odp<<"w przedzialach: "<<endl;
    for(int i=0;i<50;i++){
        if(war2[i]==maks2){
            cout<<przedzialy[i]<<endl;
            odp<<przedzialy[i]<<endl;
        }
    }
    return 0;
}
