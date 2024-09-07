#include <iostream>
#include <cmath>

using namespace std;
float x,y,z;

int main()
{
     cout << "podaj x: " << endl;
    cin >>x;
    cout << "podaj y: " << endl;
    cin >>y;

    if(x!=y){
        z=x+y;
        cout << "dodawanie wynosi:" <<z<< endl;
    }
    else{
        cout << "liczby sa takie same" << endl;

            if(x==0 || y==0){

        cout << "jedna z liczb jest zerem" << endl;
        }

        else{
         z=x/y;
        cout << "dzielenie wynosi:" <<z<< endl;
        }
    }
    return 0;

}
