#ifndef SALE_H//Sale /SALE
#define SALE_H
#include <string>
using namespace std;

struct Sale {
	int id;
	int product_id;//product/id
	string name;//food_sample/name
	int price;//food_sample/price_sale
	int date;


};
#endif