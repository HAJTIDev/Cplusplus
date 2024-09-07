#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

string dod(string a,string b){
        string c="";
   int i, j, tem=0;
   i = a.length() - 1;
   j = b.length() - 1;
   while(i>=0 || j>=0 || tem==1)
   {
        if(i >= 0) tem +=a[i] - '0';
        if(j >= 0) tem +=b[j] - '0';
        c = char(tem % 2 + '0') + c;
        tem = tem/2;
        i--;
        j--;
   }
   int k=0;
    for(int i=0;i<c.length();i++){
        if(c[i]=='0')k+=1;
        else{break;}
    }
    c.erase(0,k);
   return c;
}
int neg(string a,string b){
    int j=0;
        if(a.length()>b.length()){
        reverse(b.begin(), b.end());
        j=a.length()-b.length();
        for(int i=0;i<j;i++){
            b+='0';
        }
        reverse(b.begin(), b.end());
    }
    if(b.length()>a.length()){
        reverse(a.begin(), a.end());
        j=b.length()-a.length();
        for(int i=0;i<j;i++){
            a+='0';
        }
        reverse(a.begin(), a.end());
    }
        for(int i=0;i<a.length();i++){
            if(a[i]=='0' && b[i]=='1') continue;
            else if(a[i]=='1' && b[i]=='0') continue;
            else {return false; break;};
        }
        return true;
}
void wiek(string a,string b){
    int j=0,odp=0;

    for(int i=0;i<a.length();i++){
        if(a[i]=='0')j+=1;
        else{break;}
    }
    a.erase(0,j);
    j=0;
    for(int i=0;i<b.length();i++){
        if(b[i]=='0')j+=1;
        else{break;}
    }
    b.erase(0,j);

    if(a.length()>b.length()) cout<<"pierwsza wieksza"<<endl;
    else if(b.length()>a.length()) cout<<"druga wieksza"<<endl;
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i])continue;
            if(a[i]=='1' && b[i]=='0'){
                odp=1;
                 break;
            }
            else if(b[i]=='1' && a[i]=='0'){
                 odp=2;
                 break;
            }
            else{odp=0;}
        }
        switch(odp){
            case 0:
                cout<<"obie rowne"<<endl;
                break;
            case 1:
                cout<<"pierwsza wieksza"<<endl;
                break;
            case 2:
                cout<<"druga wieksza"<<endl;
                break;
        }
    }
}

void mn(string a,string b){
    string c,tab1[a.length()],tab2[a.length()];
    int d;

    reverse(b.begin(), b.end());
    reverse(a.begin(), a.end());
    for(int i=0;i<b.length();i++){
        for(int j=0;j<a.length();j++){
            if(b[i]=='0' && a[j]=='0') c+='0';
            if(b[i]=='0' && a[j]=='1') c+='0';
            if(b[i]=='1' && a[j]=='0') c+='0';
            if(b[i]=='1' && a[j]=='1') c+='1';

        }
    reverse(c.begin(),c.end());
    tab1[i]=c;
    c="";
    //cout<<tab1[i]<<endl;
    for(int k=0;k<a.length();k++){
            if(k%2==0)tab2[k]+=dod(tab1[k-1],tab2[k]);
    }
    }
}
int main(){
    string a,b;
    int aa=0,bb=0;
    bool z=true;
    while(z){
        aa=0;
        bb=0;
        z=true;
        cout<<"podaj liczbe bitowa"<<endl;
        cout<<" 1. :";
        cin>>a;
        cout<<" 2. :";
        cin>>b;
        for(int i=0;i<a.length();i++){
            if(a[i]=='0' || a[i]=='1') aa++;
        }
        for(int i=0;i<b.length();i++){
            if(b[i]=='0' || b[i]=='1') bb++;
        }
        if(aa==a.length() && bb==b.length()) z=false;
        else{cout<<"Zla wartosc!"<<endl;}
    }
    cout<<dod(a,b);
    cout<<endl;
    cout<<neg(a,b);
    cout<<endl;
    wiek(a,b);
    //mn(a,b);
    return 0;
}
