#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <limits>

using namespace std;

float mini=numeric_limits<float>::max(),maxi=0,sum;

void troj(float a,float b,float c){
    if(a+b>c && a+c>b && b+c>a){
        cout << "mozna zrobic trojkat ";
        sum=a+b+c;
        cout<<" obwod: "<<sum<<endl;
        if(sum>maxi)maxi=sum;
        if(sum<mini)mini=sum;
    }
    else cout << "Z bokow o tej dlugosci nie mozna zbudowac trojkata" <<endl;
}

void punkt(){
    struct{
    float x,y;
    }wart1,wart2,wart3;

	string l,k;
    float w1,w2,w3;
    vector<int> punkty;
	ifstream in("testy.txt");

	if(!in.good()) cerr<<"jest zle"<<endl;
    while (getline(in,l)){
        punkty.clear();
        char separator = ' ';
        int z = 0;
        string s;
        while (l[z] != '\0'){
            if (l[z] != separator)s += l[z];
            else{
                punkty.push_back(stoi(s));
                s.clear();
            }
            z++;
        }
        wart1.x = punkty[0];
        wart1.y = punkty[1];
        wart2.x = punkty[2];
        wart2.y = punkty[3];
        wart3.x = punkty[4];
        wart3.y = punkty[5];

        w1=sqrt(pow(wart2.x-wart1.x,2)+pow(wart2.y-wart1.y,2));
        w2=sqrt(pow(wart3.x-wart2.x,2)+pow(wart3.y-wart2.y,2));
        w3=sqrt(pow(wart1.x-wart3.x,2)+pow(wart1.y-wart3.y,2));
        cout<<w1<<" "<<w2<<" "<<w3<<" ";
        troj(w1,w2,w3);
        cout<<endl;
    }
    cout<<"maximum: "<<maxi<<"   "<<"minimum: "<<mini;
}
int main(){
	punkt();
}
