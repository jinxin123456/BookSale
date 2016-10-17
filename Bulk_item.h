#ifndef BULKITEM_H
#define BULKITEM_H
#include <string>
using namespace std;
class Bulk_item:public Item_base{
	public:
		double net_price (size_t) const;
	private:
		size_t min_qty;
		double discount;
	protected:
		string nothing;
};
#endif
