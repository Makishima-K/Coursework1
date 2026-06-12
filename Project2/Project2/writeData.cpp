#include "writeData.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

int writeDataProductBuy(const string& name, int count, const string& address, bool buy) {

    const string productFile = "Product.txt";
    const string purchaseFile = "Purchase.txt";
    const string sampleFile = "Product_Sample.txt";
    const string warehouseFile = "Warehouse.txt";

    const string productHeader = "id name expiration_date purchase_date address";
    const string purchaseHeader = "id product_id name price purchase_date";

    string line;

    // =====================================================
    // 1. HEADER PRODUCT
    // =====================================================
    ifstream checkFile1(productFile);


    if (!checkFile1.is_open()) {
        checkFile1.close();
		ofstream createFile1(productFile);
		createFile1.close();

    }

    
    ifstream checkFile2(purchaseFile);
    if (!checkFile2.is_open()) {
        checkFile2.close();
        ofstream createFile2(purchaseFile);
        createFile2.close();

    }

    
    



    bool hasHeader = false;

    ifstream inProduct(productFile);
    if (inProduct.is_open()) {

        if (getline(inProduct, line)) {
            if (line == productHeader) {
                hasHeader = true;
            }
        }

        inProduct.close();
    }

    if (!hasHeader) {

        ifstream in(productFile);
        ofstream out("temp.txt");

        if (!out.is_open()|| !in.is_open()) return 1;

        out << productHeader << "\n";

        
        while (getline(in, line)) {
            out << line << "\n";
        }


        in.close();        
        out.close();


        remove(productFile.c_str());
        rename("temp.txt", productFile.c_str());
    }

    // =====================================================
    // 2. HEADER PURCHASE
    // =====================================================

    hasHeader = false;

    ifstream inPurchaseCheck(purchaseFile);
    if (inPurchaseCheck.is_open()) {

        if (getline(inPurchaseCheck, line)) {
            if (line == purchaseHeader) {
                hasHeader = true;
            }
        }

        inPurchaseCheck.close();
    }

    if (!hasHeader) {

        ifstream in(purchaseFile);
        ofstream out("temp.txt");

        if (!out.is_open()|| !in.is_open()) return 1;

        out << purchaseHeader << "\n";

        if (in.is_open()) {
            while (getline(in, line)) {
                out << line << "\n";
            }
            in.close();
        }

        out.close();
        remove(purchaseFile.c_str());
        rename("temp.txt", purchaseFile.c_str());
    }

    // =====================================================
    // 3. GET DATA FROM SAMPLE
    // =====================================================

    int shelf_life_days = 0;
    string priceBuy = "0";

    ifstream inSample(sampleFile);
    float sizeF = 0;
    bool firstLine = true;
	bool found = false;

    while (getline(inSample, line)) {

        if (firstLine) {
            firstLine = false;
            continue; // skip header
        }

        //if (line.empty()) continue;

        stringstream ss(line);

        string id, existingName;
        string sizeStr, expiration, shelfLife, buy, sale;

        ss >> id >> existingName >> sizeStr >> expiration >> shelfLife >> buy >> sale;

        if (existingName == name) {
            shelf_life_days = stoi(shelfLife);
            priceBuy = buy;
            sizeF = 1.0 / stof(sizeStr);
			found = true;   
            break;
        }
    }


	if (!found) {
		return 4; // Product not found in sample
	}

    inSample.close();


    //



    ifstream inWarehouseFile(warehouseFile);



    int capacityInt = 0;
    float occupancyF = 0;

    firstLine = true;
	found = false;

    while (getline(inWarehouseFile, line)) {

        if (line.empty()) continue;

        stringstream ss(line);

        if (firstLine) {
            firstLine = false;
            continue; // skip header
        }

        string id, existingName;
        string  expiration, skip1, skip2, skip3, capacityStr, occupancyStr;

        ss >> id >> existingName >> skip1 >> skip2 >> skip3 >> capacityStr >> occupancyStr;

        if (existingName == address) {
            capacityInt = stoi(capacityStr);
            occupancyF = stof(occupancyStr);
			found = true;
            break;
        }
    }

	if (!found) {
		return 5; // Warehouse not found
	}

    inWarehouseFile.close();
    // 



    if (capacityInt < occupancyF + sizeF * count) {
        return 3; // Not enough space in warehouse
    }



    // =====================================================
    // 4. UPDATE OCCUPANCY
    // =====================================================


    ifstream inWarehouse(warehouseFile);
    ofstream outTemp("temp.txt");

    if (!inWarehouse.is_open() || !outTemp.is_open()) {
        return 2;
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
        string  skip1, skip2, skip3;
        string capacityStr, occupancyStr;

        ss >> id >> existingName >> skip1 >> skip2 >> skip3 >> capacityStr >> occupancyStr;

        if (existingName == address) {
            float newOccupancy = stof(occupancyStr) + sizeF * count;

            outTemp << id << " "
                << existingName << " "

                << skip1 << " "
                << skip2 << " "
                << skip3 << " "
                << capacityStr << " "
                << newOccupancy << "\n";
        }
        else {
            outTemp << line << "\n";
        }
    }

    inWarehouse.close();
    outTemp.close();

    remove(warehouseFile.c_str());
    rename("temp.txt", warehouseFile.c_str());









    // =====================================================
    // 4. MAX ID PRODUCT
    // =====================================================

    int maxProductId = 0;
    firstLine = true;

    ifstream inProducts(productFile);

    while (getline(inProducts, line)) {

        

        if (firstLine) {
            firstLine = false;
            continue;
        }

        stringstream ss(line);
        string id;
        ss >> id;

        int currentId = stoi(id);

        if (currentId > maxProductId) {
            maxProductId = currentId;
        }
    }

    inProducts.close();

    // =====================================================
    // 5. MAX ID PURCHASE
    // =====================================================

    int maxPurchaseId = 0;
    firstLine = true;

    ifstream inPurchases(purchaseFile);

    while (getline(inPurchases, line)) {

        if (line.empty()) continue;

        if (firstLine) {
            firstLine = false;
            continue;
        }

        stringstream ss(line);
        string id;
        ss >> id;

        int currentId = stoi(id);

        if (currentId > maxPurchaseId) {
            maxPurchaseId = currentId;
        }
    }

    inPurchases.close();

    // =====================================================
    // 6. DATE
    // =====================================================

    time_t t = time(nullptr);

    tm now;
    localtime_s(&now, &t);

    int purchaseDateInt =
        (now.tm_mday) * 1000000 +
        (now.tm_mon + 1) * 10000 +
        (now.tm_year + 1900);

    int expirationDateInt =
        (now.tm_mday + shelf_life_days) * 1000000 +
        (now.tm_mon + 1) * 10000 +
        (now.tm_year + 1900);

    string purchase_date = to_string(purchaseDateInt);
    string expiration_date = to_string(expirationDateInt);

    if (purchase_date.length() < 8) purchase_date = "0" + purchase_date;
    if (expiration_date.length() < 8) expiration_date = "0" + expiration_date;

    //string address = "(^ w ^)";

    // =====================================================
    // 7. WRITE DATA
    // =====================================================

    ofstream outProduct(productFile, ios::app);
    ofstream outPurchase(purchaseFile, ios::app);

    if (!outProduct.is_open() || !outPurchase.is_open()) {
        return 1;
    }

    for (int i = 0; i < count; i++) {

        int productId = maxProductId + i + 1;
        int purchaseId = maxPurchaseId + i + 1;

        // Product.txt
        outProduct << productId << " "
            << name << " "
            << expiration_date << " "
            << purchase_date << " "
            << address << endl;

        // Purchase.txt
        outPurchase << purchaseId << " "
            << productId << " "
            << name << " ";
        if (buy) {
            outPurchase << priceBuy << " ";
        }
        else {
            outPurchase << "0 ";
        }
        outPurchase << purchase_date << endl;
    }

    outProduct.close();
    outPurchase.close();





    return 0;
}

int writeDataProductSale(const string& name, int count, bool lost) {

    string filePath = "Product.txt";
    string fileSales = "Sales.txt";
    string sampleFile = "Product_Sample.txt";

    string headerSales = "id product_id name price sale_date";

    string line;

    // ------------------- HEADER SALES -------------------

    bool hasHeader = false;

    ifstream inFileSalesCheck(fileSales);

    if (inFileSalesCheck.is_open()) {

        if (getline(inFileSalesCheck, line)) {

            if (line == headerSales) {
                hasHeader = true;
            }
        }

        inFileSalesCheck.close();
    }

    if (!hasHeader) {

        ifstream in(fileSales);
        ofstream out("temp.txt");

        if (!out.is_open()) {
            return 1;
        }

        out << headerSales << "\n";

        if (in.is_open()) {

            while (getline(in, line)) {
                out << line << "\n";
            }

            in.close();
        }

        out.close();

        remove(fileSales.c_str());
        rename("temp.txt", fileSales.c_str());
    }

    // -------------------  PRODUCT -------------------

    ifstream inFile(filePath);

    vector<vector<string>> products;

    while (getline(inFile, line)) {

        if (line.empty()) continue;

        stringstream ss(line);

        vector<string> row;
        string word;

        while (ss >> word) {
            row.push_back(word);
        }

        products.push_back(row);
    }

    inFile.close();

    // --------------------------------------

    string price = "0";

    ifstream inSample(sampleFile);

    float sizeF = 0;

    bool firstLine = true;

    while (getline(inSample, line)) {

        if (firstLine) {
            firstLine = false;
            continue;
        }

        stringstream ss(line);

        string id;
        string existingName;
        string sizeStr, c2, c3;
        string priceBuy;
        string priceSale;

        ss >> id
            >> existingName
            >> sizeStr
            >> c2
            >> c3
            >> priceBuy
            >> priceSale;

        if (existingName == name) {

            price = priceSale;

            sizeF = 1.0 / stof(sizeStr);
        }
    }

    inSample.close();

  

    vector<vector<string>> targetProducts;
    vector<vector<string>> otherProducts;

    for (size_t i = 1; i < products.size(); i++) {

        if (products[i][1] == name) {
            targetProducts.push_back(products[i]);
        }
        else {
            otherProducts.push_back(products[i]);
        }
    }


    for (size_t i = 0; i < targetProducts.size(); i++) {

        for (size_t j = i + 1; j < targetProducts.size(); j++) {

            int date1 = stoi(targetProducts[i][2]);
            int date2 = stoi(targetProducts[j][2]);

            if (date2 < date1) {

                vector<string> temp = targetProducts[i];
                targetProducts[i] = targetProducts[j];
                targetProducts[j] = temp;
            }
        }
    }

 

    vector<string> soldProductIds;
    vector<string> soldAddresses;

    vector<vector<string>> updated;

   
    updated.push_back(products[0]);

    int removed = 0;

  
    for (size_t i = 0; i < targetProducts.size(); i++) {

        if (removed < count) {

            soldProductIds.push_back(targetProducts[i][0]);
            soldAddresses.push_back(targetProducts[i][4]);

            removed++;
        }
        else {

            updated.push_back(targetProducts[i]);
        }
    }

    for (size_t i = 0; i < otherProducts.size(); i++) {

        updated.push_back(otherProducts[i]);
    }

    if (removed < count) {

 

        return 1;
    }

 

    ofstream outFile(filePath);

    for (size_t i = 0; i < updated.size(); i++) {

        for (size_t j = 0; j < updated[i].size(); j++) {

            outFile << updated[i][j];

            if (j != updated[i].size() - 1) {
                outFile << " ";
            }
        }

        outFile << endl;
    }

    outFile.close();

    // =====================================================
    // UPDATE WAREHOUSE
    // =====================================================

    ifstream inWarehouse("Warehouse.txt");
    ofstream outTempW("temp.txt");

    if (!inWarehouse.is_open() || !outTempW.is_open()) {
        return 2;
    }

    bool firstLineW = true;

    while (getline(inWarehouse, line)) {

        if (firstLineW) {

            firstLineW = false;

            outTempW << line << "\n";

            continue;
        }

        if (line.empty()) {

            outTempW << "\n";

            continue;
        }

        stringstream ss(line);

        string id, existingName;
        string skip1, skip2, skip3;
        string capacityStr, occupancyStr;

        ss >> id
            >> existingName
            >> skip1
            >> skip2
            >> skip3
            >> capacityStr
            >> occupancyStr;

        float occupancy = stof(occupancyStr);

        float freed = 0;

        for (size_t i = 0; i < soldAddresses.size(); i++) {

            if (soldAddresses[i] == existingName) {

                freed += sizeF;
            }
        }

        float newOccupancy = occupancy - freed;

        if (newOccupancy < 0) {
            newOccupancy = 0;
        }

        outTempW << id << " "
            << existingName << " "
            << skip1 << " "
            << skip2 << " "
            << skip3 << " "
            << capacityStr << " "
            << newOccupancy << "\n";
    }

    inWarehouse.close();
    outTempW.close();

    remove("Warehouse.txt");
    rename("temp.txt", "Warehouse.txt");

    // =====================================================
    // MAX ID SALES
    // =====================================================

    int maxId = 0;

    bool flag = false;

    ifstream inSales(fileSales);

    while (getline(inSales, line)) {

        if (line.empty()) continue;

        stringstream ss(line);

        string id;

        ss >> id;

        if (flag) {

            if (stoi(id) > maxId) {

                maxId = stoi(id);
            }
        }

        flag = true;
    }

    inSales.close();

    // =====================================================
    // DATE
    // =====================================================

    time_t t = time(nullptr);

    tm now;

    localtime_s(&now, &t);

    int dateInt =
        now.tm_mday * 1000000 +
        (now.tm_mon + 1) * 10000 +
        (now.tm_year + 1900);

    string sale_date = to_string(dateInt);

    // =====================================================
    // WRITE SALES
    // =====================================================

    ofstream outSales(fileSales, ios::app);

    if (!outSales.is_open()) {
        return 1;
    }

    for (size_t i = 0; i < soldProductIds.size(); i++) {

        outSales << maxId + i + 1 << " "
            << soldProductIds[i] << " "
            << name << " ";

        if (lost) {
            outSales << "0 ";
        }
        else {
            outSales << price << " ";
        }

        outSales << sale_date << endl;
    }

    outSales.close();

    return 0;
}


int writeDataProductSample(const string& name, int count_on_one_pallet, bool is_expiration_date, int shelf_life_days, double price_buy, double price_sale) {
    string filePath = "Product_Sample.txt";
    string line;
    string header = "id name count_on_one_pallet is_expiration_date shelf_life_days price_buy price_sale";

    int lineCount = 0;
    bool hasHeader = false;
    bool nameExists = false;


    ifstream inFile(filePath);
    if (inFile.is_open()) {
      
        if (getline(inFile, line)) {
            if (line == header) {
                hasHeader = true;
            }
            lineCount++;

            
            if (!hasHeader) {
                stringstream ss(line);
                string existingId, existingName;
                ss >> existingId >> existingName;
                if (existingName == name) nameExists = true;
            }
        }

        
        while (getline(inFile, line)) {
            if (line.empty()) continue;
            lineCount++;

            
            stringstream ss(line);
            string existingId, existingName;
            ss >> existingId >> existingName;

            if (existingName == name) {
                nameExists = true;
                break; 
            }
        }
        inFile.close();
    }

    
    if (nameExists) {
        return 2;
    }


    if (!hasHeader) {
        ifstream in(filePath);
        ofstream out("temp.txt");

        if (!out.is_open()) return 1; 

        out << header << "\n";
        if (in.is_open()) {
            while (getline(in, line)) {
                out << line << "\n";
            }
            in.close();
        }
        out.close();

        remove(filePath.c_str());
        rename("temp.txt", filePath.c_str());

      
        if (lineCount == 0 || (lineCount > 0 && !hasHeader)) {
            
            lineCount++;
        }
    }

    
    ofstream outFile(filePath, ios::app);
    if (!outFile.is_open()) {
        return 1; 
    }


    outFile << lineCount << " "
        << name << " "
        << count_on_one_pallet << " "
        << is_expiration_date << " "
        << shelf_life_days << " "
        << price_buy << " "
        << price_sale << endl;

    outFile.close();
    return 0; 
}


//---------------------------------------------------------------------------------------------------------
int writeDataWarehouse(const string& name, int width, int height, int floors, int capacity) {
    string filePath = "warehouse.txt";
    string line;
    string header = "id name lenght width floors capacity current_occupancy";

    int lineCount = 0;
    bool hasHeader = false;
    bool nameExists = false;

  
    ifstream inFile(filePath);
    if (inFile.is_open()) {
        
        if (getline(inFile, line)) {
            if (line == header) {
                hasHeader = true;
            }
            lineCount++;

           
            if (!hasHeader) {
                stringstream ss(line);
                string existingId, existingName;
                ss >> existingId >> existingName;
                if (existingName == name) nameExists = true;
            }
        }

 
        while (getline(inFile, line)) {
            if (line.empty()) continue;
            lineCount++;

           
            stringstream ss(line);
            string existingId, existingName;
            ss >> existingId >> existingName;

            if (existingName == name) {
                nameExists = true;
                break;
            }
        }
        inFile.close();
    }


    if (nameExists) {
        return 2;
    }


    if (!hasHeader) {
        ifstream in(filePath);
        ofstream out("temp.txt");

        if (!out.is_open()) return 1; 

        out << header << "\n";
        if (in.is_open()) {
            while (getline(in, line)) {
                out << line << "\n";
            }
            in.close();
        }
        out.close();

        remove(filePath.c_str());
        rename("temp.txt", filePath.c_str());

       
        if (lineCount == 0 || (lineCount > 0 && !hasHeader)) {
          
            lineCount++;
        }
    }

    int maxProductId = 0;
    bool firstLine = true;

    ifstream inProducts(filePath);

    while (getline(inProducts, line)) {

        if (line.empty()) continue;

        if (firstLine) {
            firstLine = false;
            continue;
        }

        stringstream ss(line);
        string id;
        ss >> id;

        int currentId = stoi(id);

        if (currentId > maxProductId) {
            maxProductId = currentId;
        }
    }






    ofstream outFile(filePath, ios::app);
    if (!outFile.is_open()) {
        return 1; 
    }


    outFile << maxProductId + 1 << " "
        << name << " "

        << width << " "
        << height << " "
        << floors << " "
        << capacity << " "
        << "0.0" << " "
        << endl;
    outFile.close();



    return 0; 
}
