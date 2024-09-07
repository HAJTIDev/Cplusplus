#include <iostream>
#include <cmath>

using namespace std;
double x,y,z,t;


int main()
{
    cout << "wprowadz x" << endl;
     cin>> x;

    cout << "wprowadz y" << endl;
    cin>>y;

    cout << "wprowadz z" << endl;
    cin>>z;

     cout << "wprowadz t" << endl;
    cin>>t;

    if(x>0 && y-2!=0 && z+1!=0){
        double k;
    k= x/(y-2)+ sqrt(z+1)-7*t;
    cout << "wynik ruwna sie "<< k << endl;
    }
    else{
            cout << "zle wartosci"<< endl;

    }

    return 0;
}
