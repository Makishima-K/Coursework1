// location: id name address contact_info capacity current_occupancy

#ifndef WAREHOUSE_H//Warehouse WAREHOUSE
#define WAREHOUSE_H
#include <string>
using namespace std;

struct Warehouse {
	int id;
	string name;
	string address;	
	int length;
	int width;
	int height;
	float capacity;
	float current_occupancy;
	string contact_info;
};
#endif
