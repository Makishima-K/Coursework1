#ifndef PURCHASE_H//Purchase PURCHASE
#define PURCHASE_H
#include <string>
using namespace std;

struct Purchase {
	int id;
	int product_id;//product/id
	string name;//food_sample/name
	int price;//food_sample/price_buy
	int date;


};
#endif