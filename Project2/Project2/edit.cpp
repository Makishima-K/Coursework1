#include "editSample.h"


using namespace std;



#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <msclr/marshal_cppstd.h>


int editSampleProduct(const string& name, int count_on_one_pallet, bool is_expiration_date, int shelf_life_days, double price_buy, double price_sale) {
    string filePath = "Product_Sample.txt";
    string line;
    string header = "id name count_on_one_pallet is_expiration_date shelf_life_days price_buy price_sale";

    int lineCount = 0;
    bool hasHeader = false;
    bool nameExists = false;


    string countStr = to_string(count_on_one_pallet);
    string isExpStr = is_expiration_date ? "1" : "0";
    string shelfLifeStr = to_string(shelf_life_days);
    string priceBuyStr = to_string(price_buy);
    string priceSaleStr = to_string(price_sale);

    ifstream inWarehouse(filePath);
    ofstream outTemp("temp.txt");

    if (!inWarehouse.is_open() || !outTemp.is_open()) {
        return 1;
    }

    bool firstLineW = true;

    while (getline(inWarehouse, line)) {

        if (firstLineW) {
            firstLineW = false;
            outTemp << line << "\n"; // header
            continue;
        }

        if (line.empty()) {
            outTemp << "\n";
            continue;
        }

        stringstream ss(line);

        string id, existingName;
        string  skip1, skip2, skip3, skip4, skip5;


        ss >> id >> existingName >> skip1 >> skip2 >> skip3 >> skip4 >> skip5;

        if (existingName == name) {


            outTemp << id << " "
                << name << " "

                << countStr << " "
                << isExpStr << " "
                << shelfLifeStr << " "
                << priceBuyStr << " "
                << priceSaleStr << "\n";
        }
        else {
            outTemp << line << "\n";
        }
    }

    inWarehouse.close();
    outTemp.close();

    remove(filePath.c_str());
    rename("temp.txt", filePath.c_str());

    return 0;



}