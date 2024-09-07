#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int tab[80];
int i,suma,n;
int main()
{
    srand(time(NULL));
    for(i=0;i<80;i++)
        {
        tab[i]=rand()% 100+1;

        if(tab[i]>10 && tab[i]<50){
            suma=suma+tab[i];
            n=n+1;
            cout<<"tab["<<i<<"]="<<tab[i]<<endl;
            }
        }
        cout<<"srednia to "<<suma/n;
    return 0;
}
