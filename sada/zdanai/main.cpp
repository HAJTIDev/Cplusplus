#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    int y;
    int i;
    int z=0;
    int suma=0;
    int s;
    cout << "Podaj x ";
    cin>>x;
    cout << "Podaj y ";
    cin>>y;
    if(x<y){

    }
  if(x>y){
    for(i=y;i<=x;i++){

    if(i%2==0 && i%3!=0){
         cout << i << endl;
    suma=suma+i;
    z=z+1;
    }
        }
    s=suma/z;
    cout<<"œrednia to "<<s<<endl;
    }
    if(x<y){
        for(i=x;i<=y;i++){
            if(i%5==0){
            cout << i << endl;
            }
        }
    }
    else{
        cout<<"nie"<<endl;
    }

    return 0;
}
