
#include <iostream>
using namespace std;
int main()
{
    int n=4;

    for( int i=1; i <= n; i++ )
    {
        for( int k=1; k <= n-i; k++ )
        {
            cout << " ";
        }
        for( int k=1; k<=i*2-1; k++ )
        {
            cout << "*";
        }
        cout << endl;
    }
    for( int i= 1; i <= n; i++ )
    {
        for( int k=1; k <= n-i; k++ )
        {
            cout << " ";
        }
        for( int k=1; k<=i*2-1; k++ )
        {
            cout << "*";
        }
        cout << endl;
    }


    for( int p=1; p<=n; p++ )
    {
        for( int p=1; p<= n-1; p++ )
        {
            cout << " ";
        }
        cout << "*\n";
    }

    return 0;
}
