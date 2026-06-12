#ifndef DATA_STRUCTR_H//Sale /SALE
#define DATA_STRUCTR_H	
#include <string>
using namespace std;


struct Warehouse {
	int id;
	string name;
	int length;
	int width;
	int height;
	int capacity;
	float current_occupancy;
};
struct Product {
	int id;
	string name;
	int expiration_date;
	string address;
	int purchase_date;
};
struct ProductSample {
	int id;
	string name;//PK
	int count_on_one_pallet;
	bool is_expiration_date;
	int shelf_life_days;
	double price_buy;
	double price_sale;
};
struct Sale {
	int id;
	int product_id;//product/id
	string name;//food_sample/name
	double price;//food_sample/price_sale
	int date;
};
struct Purchase {
	int id;
	int product_id;//product/id
	string name;//food_sample/name
	double price;//food_sample/price_buy
	int date;
};



#endif
