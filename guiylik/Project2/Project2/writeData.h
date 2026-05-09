
#ifndef WRITE_DATA_H
#define WRITE_DATA_H
using namespace std;

#include <iostream>
#include <fstream>


void writeDataProductSample(int id, const string& name, int count_on_one_pallet, bool is_expiration_date, int shelf_life_days, int price_buy, int price_sale) {
    string line;
    int lineCount = 0;


    {
        ifstream inFile("Product_Sample555.txt");
        while (getline(inFile, line)) {
            if (!line.empty()) {
                lineCount++;
            }
        }
    } 

  
    int finalId = lineCount + 1;

  
    ofstream outFile("Product_Sample555.txt", ios::app);

    if (outFile.is_open()) {
        outFile << finalId << " "
            << name << " "
            << count_on_one_pallet << " "
            << is_expiration_date << " "
            << shelf_life_days << " "
            << price_buy << " "
            << price_sale << endl; 

        outFile.close();
    }
    else {
        
        cerr << "Ошибка открытия файла!" << endl;
    }
}

#endif