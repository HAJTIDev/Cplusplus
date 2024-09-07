#include <iostream>

using namespace std;

int main()
{
    string zdanie;
    int dl, i, l = 1;
    cout << "podaj zdanie ";
    getline(cin,zdanie);
    dl = zdanie.length();
    //cout<<dl;

    for (i = 0; i < dl; i++) {
        zdanie.insert(i+l, " ");
        l++;
    }
    cout<<zdanie<<endl;
    return 0;
}
