#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    float a,b,c,d,x1,x2,x;
    fstream dane;
    dane.open( "dane.txt", ios::out );
    cout<< "a,b,c " << endl;
    dane<< "a,b,c " << endl;
    cin>>a;
    dane<<a<< endl;;
    cin>>b;
     dane<<b<< endl;;
    cin>>c;
     dane<<c<< endl;;
    if(a==0){
        cout<<"koniec. nie da sie";
         dane<<"koniec. nie da sie";
    }
    else{
            d=b*b-4*a*c;
        cout<<"d= "<<d<<endl;
         dane<<"d= "<<d<<endl;
    if(d<0){
            cout<<"brak rozwiazania";
             dane<<"brak rozwiazania";
        }

        if(d>0){
            x1=(-b-sqrt(d))/(2*a);
            x2=(-b+sqrt(d))/(2*a);
            cout<<"x1= "<<x1<<endl;
            cout<<"x2= "<<x2<<endl;
            dane<<"x1= "<<x1<<endl;
            dane<<"x2= "<<x2<<endl;


        }
        if(d==
           0){
        x=-b/(2*a);
        cout<<"x= "<<x;
        dane<<"x= "<<x;
        }
    }
     dane.close();
    return 0;
}
