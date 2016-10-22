#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

istream& read(istream& is,Person people)
{
	is>>people.name<<people.address;
	return is;
}
ostream& print(ostream & out,const Person people)
{
	out<<people.name<<'\t'<<people.address;
	retun out;
}
int main()
{
	string s;
	cout<<"****************"<<endl;
	Preson people;
	cout<<endl<<"****************"<<endl;
	Person jinxin(s);
	cout<<endl<<"****************"<<endl;
	Person poly(s,s);
	cout<<endl;
	//converting construct
	Prson ploy(string("123456789");
	//error with explicit
	Person istr(istream & cin);
	return 0;
}
