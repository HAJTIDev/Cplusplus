#include <iostream>

using namespace std;

class pociag {
    private:
    int wagon, miejsca;
    int l;  //  l = ?

    public:
    pociag(int w, int m){
        wagon=w;
        miejsca=m;
        l=0;
    }
    void wypisz() {
        cout<<wagon<<" carts\n"<<miejsca<<" seats in each cart\n"<<miejsca*wagon-l<<" free seats\n"<< l << " people\n\n";
    }
    void wsiadac(){
        int o;
        cout<<"how many people are going in?"<<endl;
        cin>>o;
        l=l+o;
        if(l>miejsca*wagon){
            l=l-o;
            cout<<"to many people. it's only "<<miejsca*wagon<<"seats"<<endl;
            cout<<endl;
        }
        else if(o<0){
            l=l-o;
            cout<<"wrong value"<<endl;
            cout<<endl;
        }
        else{
            cout<<"ok"<<endl;
            cout<<endl;
        }
    }
    void wysiadanie(){
        int out;
    cout<<"how many people are leaving the train?"<<endl;
    cin>>out;
    if(out>0){
    if(out>l){
        cout<<"there aren't that many people"<<endl;
        cout<<endl;
    }
    else{
        l=l-out;
        cout<<"only "<<l<<" left"<<endl;
        cout<<endl;
    }
    }
    else{
        cout<<"wrong value"<<endl;
    }
}
    void plus_wagon(){
        int wag;
        cout<<"how many wagons to add?"<<endl;
        cin>>wag;
        if (wag>0){
            //wagon=wagon+wag;
            wagon+=wag;
            cout<<"there are now "<<wagon<<" carts"<<endl;
            cout<<endl;
        }
        else {
            cout<<"to many carts to disconnect"<<endl;
            cout<<endl;
        }
    }
    void minus_wagon(){
        int wag, wynik;
        cout << "how many carts to disconnect"<<endl;
        cin  >> wag;
        if (wag>0 && wagon-wag>0) {   //  wagon >= wag
            //wagon=wagon-wag;
            wagon-=wag;
            cout<<"only "<<wagon<<" carts left"<<endl;
            if(wagon*miejsca<l){
                wynik=l-wagon*miejsca;
                cout<<"there are too few seats now "<< wynik<<"has to leave"<<endl;
                l=l-wynik;
            }
            else {
                cout<<"everyone will fit"<<endl;
            }
        }
        else{
            cout<<"wrong value"<<endl;
        }
    }
};

int main() {
    int w,m,odp;
    cout<<"write first values"<<endl;
    cout<<"cart"<<endl;
    cin >> w;
    cout<<"seat in one cart"<<endl;
    cin >> m;
    if(w>0 && m>0){
        pociag a(w,m);

        while(true){
            cout<<"1. train condition"<<endl;
            cout<<"2. getting on the train" << endl;
            cout<<"3. getting off the train"<<endl;
            cout<<"4. join carts"<<endl;
            cout<<"5. disconnect the carts"<<endl;
            cout<<"6. exit"<<endl;
            cout<<endl;
            cin>>odp;

            switch(odp){

        case 1:
            a.wypisz();
            break;
        case 2:
            a.wsiadac();
            break;
        case 3:
            a.wysiadanie();
            break;
        case 4:
            a.plus_wagon();
            break;
        case 5:
            a.minus_wagon();
            break;
        case 6:
            return 0;
            break;
            }
        }
    }
    else{
        return 0;
    }
}

/* int main() {
    odczyt();
    do {
        menu();
        switch (znak) {
            case 0: break;  //  0 => wyjœcie
        }
    } while (znak);
    zapisz();

    return ?;
} */
