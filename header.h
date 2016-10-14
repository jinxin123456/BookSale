#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>

using namespace std;

class Sale_item{

public:
	Sale_item(const string &book):isbn(book),units_sold(0),revenue(0.0){};
	Sale_item (istream & in){in>>*this;}
	friend istream& operator>>(istream &,Sale_item &);
	friend ostream& operator<<(ostream &,Sale_item &);
	Sale_item &operator+=(const Sale_item &);
	double avg_price() const;
	bool same_isbn(const Sale_item &rsh)const
	{
		return isbn==rhs.isbn;
	}
	Sale_item():units_sold(0),revenue(0.0){}
priviate:
	string isbn;
	unsigned units_sold;
	double revenue;

};
Sales_item operator+(const Sales_item &,const Sales_item &);
inline bool operator==(const Sales_item &lhs,const Sales_item &rhs)
{
 return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.same_isbn(rhs);
}
inline bool operator!=(const Sales_item &lhs,const Sales_item &rhs)
 {
  return !(lhs == rhs);
 }

inline Sales_item & Sales_item::operator +=(const Sales_item &rhs)
 {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;	 
  return *this;
 }
inline Sales_item operator+(const Sales_item &lhs,const Sales_item &rhs)
{
	Sales_item ret(lhs);
	ret += rhs;
    return ret;
}
inline istream& operator>>(istream &in,Sales_item &s)
{
	double price;
	in >> s.isbn >> s.units_sold >> price;
	if(in)
		s.revenue = s.units_sold * price;
	else
		s = Sales_item();
	return in;
}
inline ostream& operator<<(ostream &out,const Sales_item &s)
{
	out << s.isbn << "\t" <<s.units_sold << "\t" << s.revenue << "\t" << s.avg_price();
    return out;
}
inline double Sales_item::avg_price() const
{
	if(units_sold)
		return revenue/units_sold;
	else
	    return 0;
}

#endif
