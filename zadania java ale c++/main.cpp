#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <algorithm>
using namespace std;


void zad1() {

    float a, b, c,p;

    cout<<"Zad 1" << endl;
    cout<< "a ";
    cin >> a;
    cout<< "b ";
    cin >> b;
    cout<< "c ";
    cin >> c;
    if (a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0){
        p=(a+b+c)/2;
        cout<<"pole: " << sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
        if(a==b && a==c && b==c){
            cout << " trojkat jest rownoboczny"<<endl;
            cout<< " trojkat jest rownoramienny"<<endl;
        }
        if (a==c || a==b || b==c ){
            cout<< " trojkat jest rownoramienny"<<endl;
        }
        if(a*a+ b*b==c*c ||b*b+c*c==a*a || c*c + a*a ==b*b){
                cout<< " trojkat jest prostokatny"<< endl;
        }
        if(a!=b && b!=c && a!=c){
            cout<< " trojkat jest roznoboczny"<< endl;
        }
    }
    else{
        cout<< " nie da sie zrobic takiego trojkata"<<endl;
    }

}

void zad2() {
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    srand(time(NULL));
    int i =rand()%100+1;

    cout<< "Zad 2"<<endl;
    cout << "To ja, przemozna Pytia zadaj mi w myslach pytanie, a ja odpowiem czy to o czym pomyslales sie spelni"<<endl;

    if(i<=33){
    SetConsoleTextAttribute(hOut, FOREGROUND_RED);
    cout << " Prawdopodobienstwo, ze tak bedzie wynosi:" << i << endl;
    }
    if(i>=34 && i<=66){
    SetConsoleTextAttribute( hOut, FOREGROUND_BLUE );
    cout << " Prawdopodobienstwo, ze tak bedzie wynosi:" << i << endl;
    }
    if(i>=67 && i<=100){
    SetConsoleTextAttribute( hOut, FOREGROUND_GREEN );
    cout << " Prawdopodobienstwo, ze tak bedzie wynosi:" << i << endl;
    }
    SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}

void zad3(){
    string s1,s2,s3,s4;

    cout<< " Zad 3"<< endl;
    cout<<" podaj s³owa " << endl;
    cin >> s1;
    cin >> s2;

    s3=s1[0];
    s4=s2[0];

    s2[0]=s3[0];
    s1[0]=s4[0];

    cout<< s1 << "  " << s2<< endl;
}

void zad4(){
 int a,b,c,min,max=0;

    cout<<"Zad 4" << endl;
    cout<< "a ";
    cin >> a;
    cout<< "b ";
    cin >> b;
    cout<< "c ";
    cin >> c;

    int tab[] = {a,b,c};
	sort(tab, tab+3);
    min=tab[0];

	for(int i=0;i<3;i++){
        cout<<tab[i]<<' ';
        if (tab[i] > max) {
            max = tab[i];
        }
	}

    cout<< endl;
    cout<< "max "<< max<< endl;
    cout<< "min "<< min<< endl;


}

int main()
{
    int i;
    while(i!=0){
    cout<< endl;
    cout<< " ktore zadanie "<< endl;
    cout<< " jezeli chcesz zakonczyc wpisz 0" << endl;
    cin >> i;

    if(i==1) zad1();
    if(i==2) zad2();
    if(i==3) zad3();
    if(i==4) zad4();
    if(i==0) return 0;
    }
}


