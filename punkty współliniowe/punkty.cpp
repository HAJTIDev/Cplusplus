#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    fstream punkty;
    punkty.open("punkty.txt", ios::out);
    float a,b,c,xa,xb,xc,ya,yb,yc;
        float dAB,dAC,dCB;
    cout << "podaj wspolrzedne a " << endl;
    punkty<< "podaj wspolrzedne a " << endl;
    cin>>xa;
    cin>>ya;
    punkty<<xa<<endl;
     punkty<<ya<<endl;
     cout << "podaj wspolrzedne b " << endl;
     punkty<< "podaj wspolrzedne b " << endl;
    cin>>xb;
    cin>>yb;
     punkty<<xb<<endl;
     punkty<<yb<<endl;
      cout << "podaj wspolrzedne c " << endl;
     punkty<< "podaj wspolrzedne c " << endl;
    cin>>xc;
    cin>>yc;
     punkty<<xc<<endl;
     punkty<<yc<<endl;
    dAB=sqrt((xa+xb)*(xa+xb)+ (ya+yb)*(ya+yb));
    dAC=sqrt((xa+xc)*(xa+xc)+ (ya+yc)*(ya+yc));
    dCB=sqrt((xc+xb)*(xc+xb)+ (yc+yb)*(yc+yb));
    cout<<dAB<<endl;
    cout<<dAC<<endl;
    cout<<dCB<<endl;
    punkty<<dAB<<endl;
    punkty<<dAC<<endl;
    punkty<<dCB<<endl;

    if(dAB==dAC+dCB || dAC==dAB+dCB && dAB==dAC-dCB){
        cout<<"sa wspoliniowe";
        punkty<<"sa wspoliniowe";
    }
    else{
        cout<<"nie sa";
        punkty<<"nie sa";
    }
    punkty.close();
    return 0;
}
