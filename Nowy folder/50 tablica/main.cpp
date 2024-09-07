#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int tab[50];
int i;
int main()
{
 srand(time(NULL));
    for(i=0;i<50;i++)
        {
        tab[i]=rand()% 100+1;
        if (floor(sqrt(i))==(sqrt(i)) || ceil(sqrt(i))==(sqrt(i))){

            cout<<"tab["<<i<<"]="<<tab[i]<<endl;
                 }
        }
    return 0;
}
