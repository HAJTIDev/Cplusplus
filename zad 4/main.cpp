#include <iostream>

using namespace std;

int numer_cwiartki(int a,int b){
    if(a>0 && b>0){

        return 1;
    }
    if(a>0 && b<0){

        return 2;
    }
    if(a<0 && b<0){

        return 3;
    }
    if(a<0 && b>0){
        return 4;
    }
    else{
        return 0;
    }
}
void parzyste(int a, int b){
int i=0;
if(a>b){

    for(i=a;i>b; i--){

    if(i%2==0){
        cout<<i;
        }
    }
}
if(a<b){

    for(i=a;i<=b; i++){

    if(i%2==0){
        cout<<i;
        }
    }
}
if(a=b){

    if(a%2==0){

        cout<<a;
    }
    else{
        cout<<"nie ma parzystej";
    }
}
}

float wyrazenie(int a, int b){
    if(b<0){
    cout<<5/(a+b+2);
    }
    else{
         cout<<5/(a-b+2);
    }
}
float x,y;
int main()
{
    cout << "podaj x: ";
    cin>>x;
    cout << "podaj y: ";
    cin>>y;
    cout<<"numer cwiartki "<<numer_cwiartki(x,y)<<endl;

    if(numer_cwiartki(x,y)==1){

        parzyste(x,y);
    return 0;
    }

    if(numer_cwiartki(x,y)==2 || numer_cwiartki(x,y)==4){

            if(x-y+2==0){
                cout<<"nie mozna dzielic przez 0";
            }
            else{
        cout << wyrazenie(x,y);
        }
    }
    else{
        cout<<"koniec programu";
    }
    return 0;
}
