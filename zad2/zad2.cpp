#include <iostream>

using namespace std;
int a,b,c;
int main()
{
    cout << "podaj a ";
    cin>>a;
    cout<<"podaj b ";
    cin>>b;
    cout<<"podaj c ";
    cin>>c;

    if(a>b && a>c){
        cout<<"najwieksza liczba to a "<<a;
    }

    if(b>a && b>c){
        cout<<"najwieksza liczba to b "<<b;
    }
    if(c>b && c>a){
         cout<<"najwieksza liczba to c "<<c;
    }
    if(a==c && a==b %% b==c){
        cout<<"liczby sa ruwne";
    }


    return 0;
}
