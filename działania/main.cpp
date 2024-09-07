#include <iostream>
#include <cmath>

using namespace std;
float x,y,z;
int main()

{
cout<<"podaj x:";
cin>>x;
cout<<"podaj y:";
cin>>y;
cout<<"podaj z:";
cin>>z;
if(y>0 && x>0)
{
    cout<<"k="<< (x-1)/sqrt(y)+3*z+3/(x+z-1)<< endl;
}
else
{
   cout<<"z³e liczby"<< endl;
}









    return 0;
}
