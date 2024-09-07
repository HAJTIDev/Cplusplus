#include <iostream>
#include <fstream>
using namespace std;

class student {
	string name, lastname, pesel;
	int pol, math, english;

	public:
	student(string n, string l, string pes, int p, int mat, int en){
		name=n;
		lastname=l;
		pesel=pes;	//"[0-9](11)"
		pol=p;		//"[1-6]"
		math=mat;
		english=en;
	}
	void show(){
		cout<<"name " <<name<<endl;
		cout<<"lastname "<<lastname<<endl;
		cout<<"pesel " <<pesel<<endl;
		cout<<"math grade "<<math<<endl;
		cout<<"polish grade " <<pol<<endl;
		cout<<"english grade "<<english<<endl;
	}
	float avg(){
	return (english+math+pol)/3;
	}
	void data(){
		if (pesel[2]=='2')pesel[2]='0';
		if (pesel[2]=='3')pesel[2]='1';
		char c = pesel[2];
		cout<<pesel[4]<<pesel[5]<<"."<<pesel[2]<<pesel[3]<<"."<<pesel[0]<<pesel[1]<<endl;
		cout << pesel[4] << pesel[5] << '.' << (c>'1'?char(c-2):c) << pesel[3] << '.' << pesel[0] << pesel[1] << endl;
	}

    //	przeci¹¿anie operatora '<<':
	friend ostream& operator <<(ostream& out, const student& s) {
        return out
			<< "name "			<< s.name		<< endl
			<< "lastname "		<< s.lastname	<< endl
			<< "pesel "			<< s.pesel		<< endl
			<< "polish grade "	<< s.pol		<< endl
			<< "math grade "	<< s.math		<< endl
			<< "english grade "	<< s.english	<< endl;

		//return out;
    }

    //	przeci¹¿anie operatora binarnego '+':
	student operator +(const student& s2) {
    	//return english + s.math;
		return student(name, s2.lastname, "1234567890", pol+s2.pol, math+s2.math, english+s2.english);	//	= nowy
    	//return n;
    }
};

int main()
{
	student a("Daria","Robak","06320303366",4,4,5);
	student b("dsa","khg","15312476543",2,4,3);
	student c("Dgdsf","wqqddk","1232210323",4,3,3);
	student d("fdssa","hgwqek","1204033330",2,4,2);
	student e("gdsjia","Rsa","02013103322",4,5,5);

	ofstream file("output.txt");
	//a.show();
	//cout << a << b << c;	//	cout.show(a);
	//file >> a >> b >> c;
	//file << a.show();
	file << a;
	cout << a + b + c << endl;
	cout<<"avg grade " <<a.avg()<<endl;
	a.data();
	cout<<"avg grade of 5 students " << (a.avg()+b.avg()+c.avg()+d.avg()+e.avg())/5;
}
