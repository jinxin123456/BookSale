#include <iostream>
#include "header.h"

using namespace std;

istream& operator>>(istream &in,Sale_item & saledata)
{
	double price;
	in>>saledata.isbn>>saledata.units_sold>>price;
	if(in)
		saledata.revenue=saledata.units_sold*price;
	return in;
}
ostream& operator<<(ostream &out,const Sale_item & saledata)
{
	out<<saledata.isbn<<'\t'<<saladata<<units_sold<<'\t'<<saledata.revemue<<endl;
	return out;
}
