#include <iostream>

using namespace std;
float a,b; //deklaracja zmiennej a typu ca³kowitego
int main()
{
    cout<<"podaj a:";
    cin>>a;
    cout<<"podaj b:";
    cin>>b;
    cout <<"suma wynosi:"<<a+b<< endl;
    cout <<"iloczyn wynosi:"<<a*b<< endl;
    if(b!=0)
    {
    cout <<"iloraz wynosi:"<<a/b<< endl;
    }
    else
    {
     cout<<"iloczyn wynosi: wrong number"<< endl;
    }

    cout <<"roznica wynosi:"<<a-b<< endl;


    return 0;
}
