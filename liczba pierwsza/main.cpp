#include <iostream>
#include <cmath>
using namespace std;
int a;
int i;
int main()
{
    cout << "podaj liczbe ";
    cin>>a;

    for(i=1;i<=a;i++){
        if(a%i==0 && i!=a && i!=1 || a==1){
            cout<<"liczba nie jest pierwsza";
            return 0;
        }
           else{
        cout<<"lczba jest pierwsza";
        return 0;
            }
    }
}
