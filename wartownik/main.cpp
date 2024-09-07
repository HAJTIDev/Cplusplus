#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int tab[100];
int i=0;
int a;

void szukaj(int a, int i){

    for(i=0;tab[i]!=a && tab[i]!=0;i++){
    }
    if(tab[i]== a){
         cout<<"liczba jest na pozycji "<<i+1;
    }
    else{
        cout<<"liczby nie ma w zbiorze";
    }
}
 int generator(int i, int tab[]){

     srand(time(NULL));

  for(i=0; i<100; i++){

        tab[i]=rand()%100+1;

        cout<<tab[i]<<'\t';
        }
    }
int main()
{
cout<<"wygenerowana tablica "<<endl;

cout<<generator(i, tab)<<endl;

        cout<<"podaj szukana: ";

    cin>>a;

    szukaj(a,i);

    return 0;
}
