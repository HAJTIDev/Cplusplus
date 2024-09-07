#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

string XOR(string s1, string s2 , string target){
    int l1 = s1.length();
    int l2 = s2.length();
    int maxLen = l1;
    string finalTarget;
    string zeros = "";
    if(l1>l2){
        int dif = l1-l2;
        for(int i=0;i<dif;i++){
            zeros+='0';
        }
        s1.insert(0, zeros);
        maxLen=l1;
    }
    else if(l2>l1){
        int dif = l2-l1;
        for(int i=0;i<dif;i++){
            zeros+='0';
        }
        s2.insert(0, zeros);
        maxLen=l2;
    }
    for(int i=maxLen;i>0;i--){
        if(s1[i]==s2[i]){
            finalTarget.insert(0,"0");
        }
        else{
            finalTarget.insert(0,"1");
        }
    }
    target=finalTarget;

    return target;
}
string toBinary(int n){
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main(){
    ifstream plik("bin.txt");
    ofstream ans1("2,2.txt");
    string line,maximBinary;
    int maxim=0,num;
    int cnt=0,num2 = 0,j=0,c = 0;

    while (!plik.eof()){
        plik>>line;
        int l = line.length();
        int c = 0;
        for(int i = 0; i<=l;i++){
            if (i == 0){
                c++;
            }
            else if(line[i]!=line[i-1] && i!=l){
                c++;
            }
        }
        if(c<=2){
            cnt++;
        }
    }
    cout<<"Zad2.2: ";
    cout<<cnt<<endl;
    ans1<<"Zad2.2: ";
    ans1<<cnt<<endl;
    plik.close();
    ans1.close();

    ifstream plik2("bin.txt");
    ofstream ans2("2,3.txt");
    while(!plik2.eof()){
    plik2>>line;
        num = stoll(line,nullptr,2);
        if(num>maxim){
            maxim=num;
            maximBinary=line;
        }
    }
    cout<<"Zad2.3: "<<maximBinary<<endl;
    ans2<<"Zad2.3: "<<maximBinary<<endl;
    plik2.close();
    ans2.close();

    ifstream plik3("bin.txt");
    ofstream ans3("2,5.txt");
    cout<<"Zad2.5"<<endl;
    ans3<<"Zad2.5"<<endl;
    while(!plik3.eof()){
        plik3>>line;
        num2 = stoll(line,nullptr,2);
        num2 = num2/2;
        string st2 = toBinary(num2);
        string targ ="";
        cout<< XOR(line,st2,targ)<<endl;
        ans3<<XOR(line,st2,targ)<<endl;
    }
    plik3.close();
    return 0;
}
