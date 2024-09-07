#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class wektor{
public:
    float x,y,z;
    void wypisz(void){
        cout<<endl<<"["<<x<<","<<y<<","<<z<<"]";
    }
    void normuj(void);
};

void wektor::normuj(void){

    float dl=sqrt(x*x+y*y+z*z);
    cout<<"dl= "<<dl;
    x=x/dl;
    y=y/dl;
    z=z/dl;
}

double dlugosc(wektor w){
    return sqrt(w.x*w.x+w.y*w.y+w.z*w.z);
}
int main()
{
    wektor w;
    w.x=2;
    w.y=1;
    w.z=1;
    w.wypisz();
    cout<< "dlugosc wektora wynosi: "<<setprecision(3)<<dlugosc(w)<<endl;
    w.normuj();
    w.wypisz();
}
