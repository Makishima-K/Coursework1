#include "calculateProfit.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace std;


double calculateProfit() {


	string fileSales = "Sales.txt";
	string fileBuy = "Purchase.txt";
	double totalProfit = 0.0;
	double price = 0.0;
	ifstream inSales(fileSales);
	bool flag = true;
	bool flag2 = true;

	if (inSales.is_open()) {
		string line;
		while (getline(inSales, line)) {
			if (flag) {
				flag = false;
				continue; 
			}
			if (line.empty()) continue;
			stringstream ss(line);
			string id, product_id, sale_name, price_str, sale_date;
			ss >> id >> product_id >> sale_name >> price_str >> sale_date;

			price = stod(price_str);
			totalProfit += price;

		}
		inSales.close();
	}
	ifstream inBuy(fileBuy);
	if (inBuy.is_open()) {
		string line;
		while (getline(inBuy, line)) {
			if (flag2) {
				flag2 = false;
				continue; 
			}
			if (line.empty()) continue;

			stringstream ss(line);
			string id, buy_id, buy_name, price_str, purchase_date;
			ss >> id >> buy_id >> buy_name >> price_str >> purchase_date;
			price = stod(price_str);
			totalProfit -= price;

		}
		inBuy.close();
	}


	totalProfit = round(totalProfit * 100.0) / 100.0;

	return totalProfit;
}