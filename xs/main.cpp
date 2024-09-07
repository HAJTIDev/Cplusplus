#include <iostream>
#include <cmath>

using namespace std;
double a,b,c,o,p,P;
int main()
{
    cout << "wprowadz a" << endl;
     cin>> a;

    cout << "wprowadz b" << endl;
    cin>>b;

    cout << "wprowadz c" << endl;
    cin>>c;

    if(a+b>c && c+b>a && c+a>b && a>0 && b>0 && c>0){

        if(a==b  && b==c ){
               cout << "trujkat jest ruwnoboczny" << endl;
            p=(a+b+c)/2;
            P=sqrt(p*(p-a)*(p-b)*(p-c));
            o= a+b+c;
            cout << "pole wynosi"<< P << endl;
            cout << "obwud wynosi"<< o << endl;
        }
            else{
                cout << "trujkat jest prostokontny" << endl;
                o= a+b+c;
            cout << "obwud wynosi"<< o << endl;
            }


    }
    else{
        cout << "z tych bokuw nie da sie zrobic kit kata" << endl;
    }
    return 0;
}
