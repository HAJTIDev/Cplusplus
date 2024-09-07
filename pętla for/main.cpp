#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int i;
    int suma=0;
    cout << "Podaj x ";
    cin>>x;
    cout << "Podaj y ";
    cin>>y;

    for(i=x;i<=y;i++){
    cout << i << endl;
    suma=suma+i;
    }
    cout << suma << endl;
    return 0;

}
