#include <iostream>

using namespace std;
float bmi(float waga,float wzrost){
    float bmi;
    wzrost= wzrost/100;
    bmi= waga /( wzrost * wzrost );
    cout<<"twoje bmi to: " << bmi << endl;

    if( bmi <= 18.5 ){
         cout << "masz niedowage" << endl;
    }

    if( bmi > 18.5 && bmi <= 24.9){
         cout << "masa prawdilowa" << endl;
    }

    if( bmi > 25 && bmi <= 29.9 ){
         cout << "nadwaga" << endl;
    }

    if( bmi > 30 && bmi <= 34.9){
         cout << "oty³oœæ 1 stopnia" << endl;
    }
    if(bmi > 35 && bmi <=39.9){
        cout<< "otylosc 2 stopnia" << endl;
    }
    if( bmi >= 40){
        cout<< "otylosc 3 stopnia " << endl;
    }
    return 0;
}

int main()
{
    float waga,wzrost;

    cout << "Podaj wage" << endl;
    cin >> waga;
    cout << endl;
    cout << "Podaj wzrost" << endl;
    cin >> wzrost;
    cout << endl;
    cout << bmi(waga, wzrost) << endl;
    return 0;
}
