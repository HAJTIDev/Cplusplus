#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream dane ("dane.txt");
    ofstream odp ("odp.txt");
    string s;
    bool pop[4];
    char tab[4];
    char p;
    int punkt=0;
    tab[0]='A';
    tab[1]='B';
    tab[2]='C';
    tab[3]='D';
    tab[4]='A';

    if(!dane.is_open()) cout << "cos zle";
    if(!odp.is_open())  cout << "cos zle";

    for(int i=0; i<5; i++){
    getline(dane, s);
    cout<< s << endl;
        for(int j=0; j<4; j++){
        getline(dane, s);
         cout<< s << endl;
            }
        cin>>p;
        if(p== tab[i]){
            punkt++;
            pop[i]=true;
            if(i==5 && tab[i]=='A'){
                pop[i]=true;
                punkt=punkt+1;
            }
        }

            else{
                pop[i]=false;
                }
            }


    cout<<punkt<< endl;
    for(int k=0;k<5;k++){
        cout<<pop[k] << endl;
    }



    dane.close();
    odp.close();
    return 0;
}
