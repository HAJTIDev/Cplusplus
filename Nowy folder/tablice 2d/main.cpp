#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int tab2[3][3];
int i,j,suma[3];
int main()
{

    srand(time(NULL));

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            tab2[i][j]=rand()% 100+1;

            cout<<tab2[i][j]<<"\t";

             suma[i]=suma[i]+tab2[i][j];
            }
            cout<<"suma wiersza to "<<suma[i]<<endl;
            cout<<endl;
        }

    return 0;
}
