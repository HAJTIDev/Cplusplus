#include <iostream>
#include <cmath>
using namespace std;
int x,y,z,i,s;
int main()
{

    cout << "podaj x ";
    cin>>x;
     cout << "podaj y ";
     cin>>y;
      cout << "podaj z ";
      cin>>z;
      if(x<y && z%2==0){
            if( y!=0 && (x+3)>=0){
                cout<<"wynik to "<<sqrt(x+3)+(4/y)+(z/2);
            }
      }

      else if(x<y && z%2!=0 && z>=x && z<=y){
          for(i=x;i<=y;i++){
            if(i%z==0){
                    s=s+1;
            }
            cout<<s;
          }

      }
      else{
        cout<<"koniec";
      }



    return 0;
}
