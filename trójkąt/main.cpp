#include <iostream>
#include <cmath>

using namespace std;
double x,y,z;
int main()
{
    cout << "wprowadz x" << endl;
     cin>> x;

    cout << "wprowadz y" << endl;
    cin>>y;

    cout << "wprowadz z" << endl;
    cin>>z;


    if(x+y>z && y+z>x && x+z>y && x>0 && y>0 && z>0){
            double o,p,P;
            p=(x+y+z)/2;
            P=sqrt(p*(p-x)*(p-y)*(p-z));
            o= x+y+z;
            cout << "pole wynosi"<< P << endl;
            cout << "obwud wynosi"<< o << endl;
    }
    else{
        cout << "nie istnieje taki trujkat" << endl;
    }
    return 0;
}
