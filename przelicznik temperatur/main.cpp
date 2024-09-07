#include <iostream>

using namespace std;

    void temp(int x,char in,char out){
        if(in=='K' && x<0)
            cout<<"kelwiny nie moga byc ujemne"<<endl;
        else if(in=='C' || in=='F' || in=='K'){
            cout << "podana temperatura to: "<< x << " stopni "<<in<<endl;
            cout<<endl;
            if(in=='C'){
            if(out=='F') cout << x << " stopni "<<in<< " to "<<(x*1.8)+32<<" stopni " << out<<endl;
            if(out=='K') cout << x << " stopni "<<in<< " to "<<x+ 273.15<<" stopni " << out<<endl;
        }
        else if(in=='F'){
            if(out=='C') cout << x << " stopni "<<in<< " to "<<(x -32)/1.8<<" stopni " << out<<endl;
            if(out=='K') cout << x << " stopni "<<in<< " to "<<(x+459.67)*5/9<<" stopni " << out<<endl;
        }
        else if(in=='K'){
            if(out=='C') cout << x << " stopni "<<in<< " to "<< x -273.15 <<" stopni " << out<<endl;
            if(out=='F') cout << x << " stopni "<<in<< " to "<<(x*1.8) - 459.67<<" stopni " << out<<endl;
                }
        }
        else cout<<"podana zla jednostka" << endl;
    }
int main(){
    float x;
    char y,z;
    cout <<"podaj stopnie" << endl;
    cin >> x;
    cout<<"jakie to sa stopnie?" << endl;
    cin >> y;
    cout<< "na jakie stopnie przekonwertowac?"<<endl;
    cin >> z;
    temp(x,y,z);

    return 0;
}
