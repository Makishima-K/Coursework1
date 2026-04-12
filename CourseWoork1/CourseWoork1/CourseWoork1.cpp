

#include <iostream>

#include <string>


#include "location.h";
#include "food.h";

















using namespace std;


//food warehouse management system

// food: id name quantity location_address expiration_date 

// location: id name address capacity_on_pallet current_occupancy

// food_specification: id food_id specification_name specification_value_on_pallet expiration_date_in_days price buy_price

// purchase: id food_id quantity purchase_date price_per_unit

// looses: id food_id quantity loss_date reason

// dilivery: id food_id quantity delivery_date supplier_name


// Store data about the objects of several types in multiple files(separate file for each type);
// View data on the screen in tabular form or in other clear way(by using data alignment on the
//	screen) that are taken from one or several files at once;
// Add data;
// Edit data;
// Delete data(at least 3 criteria) and delete already filtered data shown on the screen;
// Search data(at least 3 criteria, search by numeric, text data and by data with complex structure
//	is required);
// Sort data(at least 3 criteria, sort by numeric, text data and by data with complex structure is
//	required);
// Calculations(at least 3 types with different level of complexity based on objects of one type
//	and several types).



void viewData(string name) {
	// Code to view data
	FILE* file;

	fopen_s(&file, (name + ".txt").c_str(), "r"); // Open the file in read mode
	if (file) {
		char buffer[256];
		int i = 0;
		cout << "Songs in the collection:\n";
		while (fgets(buffer, sizeof(buffer), file)) {
			cout << buffer;
			i++;
			if (i == 3) {
				cout << "-----------------------\n";
				i = 0;
			}

		}
		fclose(file); // Close the file after reading
	}
	else {
		cout << "Could not open the file." << endl;
	}

}


void addData(string name) {
	// Code to add data
	FILE* file;
		fopen_s(&file, (name + ".txt").c_str(), "a"); // Open the file in append mode



}




int main()
{
   while (true) {
		string fileName;


		cout << "Food Warehouse Management System" << endl;
		cout << "1. View Data" << endl;
		cout << "2. Add Data" << endl;
		cout << "3. Edit Data" << endl;
		cout << "4. Delete Data" << endl;
		cout << "5. Search Data" << endl;
		cout << "6. Sort Data" << endl;
		cout << "7. Calculations" << endl;
		cout << "8. Exit" << endl;
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;

		switch (choice) {
			case 1:
				// Code to view data
				cout << "Enter the name of the file to view: ";
				cin >> fileName;
				viewData(fileName);

				break;

			case 2:

				// Code to add data
				break;
			case 3:
				// Code to edit data
				break;
			case 4:
				// Code to delete data
				break;
			case 5:
				// Code to search data
				break;
			case 6:
				// Code to sort data
				break;
			case 7:
				// Code for calculations
				break;
			case 8:
				cout << "Exiting..." << endl;
				return 0;
			default:
				cout << "Invalid choice, please try again." << endl;
		}




	}


	return 0;
}
