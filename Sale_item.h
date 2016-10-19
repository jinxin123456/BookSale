#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>

using namespace std;

class Sale_item
{
	public:
		Sale_item(const string &book):isbn(book),units_sold(0),revenue(0.0){};
		Sale_item (istream & in){in>>*this;}
		Sale_item (const Sale_item &);
		Sale_item(const Sale_item &&);
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

#endif
