#ifndef PRODUCT_SAMPLE_H
#define PRODUCT_SAMPLE_H
#include <string>
using namespace std;

struct ProductSample {
	int id;
	string name;
	int count_on_one_pallet;
	bool is_expiration_date;
	int shelf_life_days;
	int price_buy;
	int price_sale;
	
};
#endif