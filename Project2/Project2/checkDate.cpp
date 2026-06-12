#include "checkDateProduct.h"
#include "writeData.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <ctime>

using namespace std;

int checkDateProduct() {

	string fileProduct = "Product.txt";

	time_t t = time(nullptr);

	tm now;

	localtime_s(&now, &t);

	int dateInt =
		(now.tm_year + 1900) * 10000 +
		(now.tm_mon + 1) * 100 +
		now.tm_mday;

	bool expiredFound = false;
	
	int countExpired = 0;

	while (1) {

		bool skipFirstLine = true;

		string line;

		ifstream inFile(fileProduct);
		string id;
		string  skip1, skip2, skip3, skip4;
		string expiration_date, existingName, purchase_date, address;



		while (getline(inFile, line)) {


			stringstream ss(line);
			
			if (skipFirstLine) {
				skipFirstLine = false;
				continue; // skip header
			}


			ss >> id >> existingName >> expiration_date >> purchase_date >> address;

			if (expiration_date == purchase_date) continue;
			int expirationDateDayInt = stoi(expiration_date.substr(0, 2));
			int expirationDateMonthInt = stoi(expiration_date.substr(2, 2));
			int expirationDateYearInt = stoi(expiration_date.substr(4, 4));

			int expirationDateInt =
				expirationDateYearInt * 10000 +
				expirationDateMonthInt * 100 +
				expirationDateDayInt;

			if (expirationDateInt < dateInt) {
				expiredFound = true;
				
				inFile.close();
				writeDataProductSale(existingName, 1, true);
				countExpired++;
				break;
			}
		}
		if (expiredFound) {
			expiredFound = false;
			continue;
		}
		break;

	}
	

	return countExpired;


}