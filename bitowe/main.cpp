#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

void dod(string a,string b){
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
   cout<<c;
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
    int j=0;

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
    if(b.length()>a.length()) cout<<"druga wieksza"<<endl;
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i])continue;
            if(a[i]=='1' && b[i]=='0'){
                 cout<<"pierwsza wieksza"<<endl;
                 break;
            }
            if(b[i]=='1' && a[i]=='0'){
                 cout<<"druga wieksza"<<endl;
                 break;
            }
        }
    }
}
int main(){
    string a,b;
    while(true){

    for(int i=0;i<a.length();i++){
        cout<<"podaj liczbe bitowa"<<endl;
        cin>>a;
        cin>>b;
        if(a[i]!='0' || a[i]!='1')
            break;
        }
    }
    dod(a,b);
    cout<<endl;
    cout<<neg(a,b);
    cout<<endl;
    wiek(a,b);

}
