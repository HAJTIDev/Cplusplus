#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int tab2[3][3];
int i,j;
int iloraz=1;
int main()
{

    srand(time(NULL));

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

        tab2[i][j]=rand()% 100+1;

        if(i==j){

        cout<<tab2[i][j];
        }
            cout<<"\t";
        }
        cout<<endl;
    }

    if(tab2[i][j]%3==0 || tab2[i][j]%4==0){

        iloraz=iloraz*tab2[i][j];
        cout<<"iloraz to "<<iloraz;
            }

            else{
                cout<<"iloraz nie spelnia warunku";
            }
    return 0;
}
