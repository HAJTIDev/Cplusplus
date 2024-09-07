#include <iostream>
#include <cmath>
using namespace std;
char k;
double a,b;

int main()
{
    cout << "podaj litere k" << endl;
     cin>> k;
    if(k=='p' || k=='K'){
     if(k=='p'){
       cout << "wprowadz a" << endl;
     cin>> a;

    cout << "wprowadz b" << endl;
    cin>>b;
    if(a>0 && b>0){
        cout << "obwud to " <<2*a+2*b<< endl;
        cout << "pole wynosi " <<a*b<< endl;
    }
    else
        cout << "liczby sa minusowe" << endl;
    }
     if(k=='K'){
         cout << "wprowadz a" << endl;
     cin>> a;
     if(a>0){
        cout << "przekontna wynosi: " <<a*sqrt(2)<< endl;
     }
     else{
        cout << "liczba jest ujemna" << endl;
        }
     }
    }
     else{
        cout << "koniec programu" << endl;
     }

    return 0;
}
