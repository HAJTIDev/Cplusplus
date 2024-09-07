#include <iostream>
#include <cmath>

using namespace std;
float x, y,b;

int main()
{
    cout << "podaj x: " << endl;
    cin >>x;
    cout << "podaj y: " << endl;
    cin >>y;
    b=y*x;
    if(b==100)
        {
    cout << "mno¿enie jest równe 100" << endl;
    }
    if(b>100){

        cout << "mno¿enie jest wiêksze od 100 " << endl;
    }
    else
        cout << "mno¿enie jest mniejsze od 100 " << endl;


    return 0;
}
