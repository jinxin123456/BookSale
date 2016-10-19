#include <iostream>
#include "Sale_item.h"

using namespace std;

istream& Sale_item::operator>>(istream &in,Sale_item & saledata)
{
	double price;
	in>>saledata.isbn>>saledata.units_sold>>price;
	if(in)
		saledata.revenue=saledata.units_sold*price;
	return in;
}

ostream& Sale_item::operator<<(ostream &out,const Sale_item & saledata)
{
	out<<saledata.isbn<<'\t'<<saladata<<units_sold<<'\t'<<saledata.revemue<<endl;
	return out;
}

Sale_item Sale_item::operator+(const Sale_item &saladata1,const Sale_item &saladata2)
{
	Sale_item sum=saledata1;
	sum+=saledata2;
	return sum;
}
bool Sale_item::operator==(const Sale_item &saladata1,const Sale_item &saladata2)
{
	return saledata1.isbn==saledata2.isbn && 
		saledata1.units_sold==saladata2.units_sold &&
		saledata1.revenue==saledata2.revenue;
}

