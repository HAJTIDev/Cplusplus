#include <iostream>
#include <cmath>>


using namespace std;
float x,y,z;
int main()
{
    cout << "wprowadz x" << endl;
     cin>> x;

    cout << "wprowadz y" << endl;
    cin>>y;

    cout << "wprowadz z" << endl;
    cin>>z;

    if(x>z && y>x){
        float a;
    a= x*y;
    cout << "mnozenie wynosi "<< a << endl;
    }
    if(y<z ||y<x){
            float b;
            b=y/z;
            cout << "dzielenie wynosi "<< b << endl;
    }
    if(z>x && y!=5 ||y>z && x!=0){
        float c;
            c=x+y+z;
        cout << "dodawanie wynosi "<< c << endl;
    }
    else{
            cout << "nein"<< endl;

    }

    return 0;
}
