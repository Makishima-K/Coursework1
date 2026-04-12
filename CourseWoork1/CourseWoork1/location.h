// location: id name address contact_info capacity current_occupancy

#ifndef LOCATION_H
#define LOCATION_H

struct Location {
	int id;
	string name;
	string address;
	string contact_info;
	int capacity;
	int current_occupancy;
};
#endif
