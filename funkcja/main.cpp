#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

#define     N   100

using namespace std;

struct Punkt {
    double x, y;
};

int main() {
    Punkt tp[N];
    double tab[100][2];

    srand(time(NULL));

    for (int i; i<2; i++) {
        for (int j; j<100; j++) {
            tab[i][j]=(rand() % -10)+20;
            cout<<tab[i][j]<<endl;
        }
        cout<<endl;
    }

    //  to samo ale na struktrze Punkt:
    for (int i = 0; i < N; i++) {
        tp[i].x = rand();
        tp[i].y = rand();
        cout << RAND_MAX <<  rand() << endl;
    }

    return 0;
}
