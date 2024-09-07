#include <iostream>
#include <cmath>

using namespace std;
int x,y,i,z=1;
float suma,a;
int main()
{
     cout << "podaj x ";
    cin>>x;
    cout<<"podaj y ";
    cin>>y;
if(x<y && x!=0){

    for(z=i;i==x;i++){
        a=(1/i);
        suma=suma+a;
        }
            cout<<suma;
    }
if(y<x){
        for(y=i;i==x;i++){
            if(i%3==0){
                cout<<i;
            }
        }
}
    return 0;
}
