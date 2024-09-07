#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name;
    string line;
    int age;
    string cos;
    fstream file1;
    cin>>cos;
    file1.open("numbers.txt",ios::out|ios::app);
    file1<<cos<<endl;
    file1.close();
    file1.open("numbers.txt",ios::in);
    if(file1.good()){
        cout<<"file exist"<<endl;
    }
    else{
        cout<<"file not exist"<<endl;
    }
    while(getline(file1,line)){
        cout<<line<<endl;
    }
    //cout << "what's your name" << endl;
    //cin>>name;
    //cout<<"how old are you?"<<endl;
        //cin>>age;
        //file1.open("data.txt",ios::out|ios::app);
        //file1<<name<<" "<<age<<endl;
        file1.close();
    return 0;
}
