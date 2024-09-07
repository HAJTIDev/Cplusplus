#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
float x,i,r;
int main()
{
    srand(time (NULL));

    cout << "zgadnij liczbe ";
    r=rand() % 100 + 1;
    while(x!=r){
        cin>>x;
        if(x==r){
            cout<<"udalo ci sie"<<endl;
        }
        else{
            if(x>r){
                cout<<"liczba za duza"<<endl;
            }
        else if(x<r){
            cout<<"liczba za mala"<<endl;
            }
        }
    }
    return 0;
}
