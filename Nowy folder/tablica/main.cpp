#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int tab[10];
int i,suma,maks=0,mini=51;
int main()
{
    srand(time(NULL));
    for(i=0;i<10;i++)
        {
        tab[i]=rand()% 50+1;
        cout<<"tab["<<i<<"]="<<tab[i]<<endl;

    if(maks<tab[i]){
        maks=tab[i];
    }
        }
         for(i=0;i<10;i++)
        {
        tab[i]=rand()% 50+1;
        cout<<"tab["<<i<<"]="<<tab[i]<<endl;

    if(mini>tab[i]){
        mini=tab[i];
    }
        }
    cout<<"najwieksza to: "<<maks;
    cout<<"najmniejsza to: "<<mini;
    cout<<"srednia to: "<<(maks+mini)/2;

    return 0;
}
