#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;
class Person
{
	public:
		Person(string s,string add):name(s),address(add)
	{
		cout<<"the base construct"<<endl;
	}
		Person(){}
		//delegating constructor
		Person(string s):Person(s,"")
	{
		cout<<"delegating constructor"<<endl;
	}
		//conxerting constructor the init-string should only one
		Person(string s):name(s)
	{
		cout<<"converting constructor"<<endl;
	}
		//istream constructor
		explicit Person(istream &is)
		{
			is>>this->name>>this->address;
			return is;
		}
		friend string get_name(const Person people)
		{
			return people.name;
		}
		friend string get_addr(const Person people)
		{
			return people.address;
		}
		friend istream& read(istream &,Person&);
		friend ostream& print(ostream &,const Person &);
	private:
		string name;
		string address;
};
#endif
