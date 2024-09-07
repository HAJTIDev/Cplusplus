#include <iostream>

using namespace std;

int main()
{
    int dl;
    string imie;
    cout<<"podaj imie: ";
    cin>>imie;
    dl=imie.length();
    //cout<<dl;
   char lastChar= imie[imie.length()-1];
   cout<<lastChar<<endl;
   if(lastChar='a'){
    cout<<"jest kobiet¹";
   }
   else{
    cout<<" jest mê¿czyzn¹";
   }
    return 0;
}
