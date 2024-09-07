#include <iostream>

using namespace std;

class bins{
    int plastic,paper,glass;
    public:
    bins(int pla, int pap, int gla){
        plastic=pla;
        paper=pap;
        glass=gla;
    }
    void out_glass(){
        cout<<"emptying the glass bin"<<endl;
        glass=0;
    }
    void put_glass(){
            int a;
    cout<<"how many piece of glass you want to put?"<<endl;
    cin >> a;
    if(a>=0){
        glass=glass+a;
    }
    }
    void out_paper(){
    cout<<"emptying the paper bin"<<endl;
        paper=0;
    }
    void put_paper(){
        int a;
    cout<<"how many piece of paper you want to put?"<<endl;
    cin >> a;
    if(a>=0){
        paper=paper+a;
    }
}
    void out_plastic(){
    cout<<"emptying the glass bin"<<endl;
    plastic=0;
    }
    void put_plastic(){
    int a;
    cout<<"how many piece of plastic you want to put?"<<endl;
    cin >> a;
    if(a>=0){
        plastic=plastic+a;
    }
}
    void state(){
    cout<<plastic<<" in plastic bin"<<endl;
    cout<<paper<< " in paper bin"<<endl;
    cout<< glass << " in glass bin"<<endl;
    }
};
int main()
{
    bins a(2,3,4);
    a.state();
    a.out_glass();
    a.state();
    a.put_glass();
    a.state();
    a.put_paper();
    a.state();
    a.put_plastic();
    a.state();
    a.out_paper();
    a.state();
}
