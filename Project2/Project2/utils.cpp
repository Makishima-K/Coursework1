#include "utils.h"

#include <array>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


using namespace std;

cli::array<System::String^>^ GetColumn(System::String^ filename, int columnIndex)
{
    int i = 0;

    if (!System::IO::File::Exists(filename))
        return gcnew cli::array<System::String^>(0);

    System::Collections::Generic::List<System::String^>^ temp =
        gcnew System::Collections::Generic::List<System::String^>();

    try
    {
        for each (System::String ^ line in System::IO::File::ReadLines(filename))
        {
            if (i == 0)
            {
                i++;
                continue;
            }

            if (System::String::IsNullOrWhiteSpace(line))
                continue;

            cli::array<System::String^>^ parts = line->Split(
                gcnew cli::array<wchar_t>{ ' ', '\t' },
                System::StringSplitOptions::RemoveEmptyEntries
            );

            if (columnIndex >= 0 && columnIndex < parts->Length)
            {
                temp->Add(parts[columnIndex]);
            }
        }
    }
    catch (System::Exception^)
    {
        return gcnew cli::array<System::String^>(0);
    }

    return temp->ToArray();
}



cli::array<System::String^>^ takeDataInSample(const string& name)
{
    string filePath = "Product_Sample.txt";

    ifstream inFile(filePath);
    string line;

    while (getline(inFile, line))
    {
        if (line.empty())
            continue;

        stringstream ss(line);

        string existingId;
        string existingName;
        string existingCount_on_one_pallet;
        string existingExpiration;
        string existingShelfLife;
        string existingPriceBuy;
        string existingPriceSale;

        ss >> existingId
            >> existingName
            >> existingCount_on_one_pallet
            >> existingExpiration
            >> existingShelfLife
            >> existingPriceBuy
            >> existingPriceSale;

        if (existingName == name)
        {
            cli::array<System::String^>^ data =
                gcnew cli::array<System::String^>(7);

            data[0] = gcnew System::String(existingId.c_str());
            data[1] = gcnew System::String(existingName.c_str());
            data[2] = gcnew System::String(existingCount_on_one_pallet.c_str());
            data[3] = gcnew System::String(existingExpiration.c_str());
            data[4] = gcnew System::String(existingShelfLife.c_str());
            data[5] = gcnew System::String(existingPriceBuy.c_str());
            data[6] = gcnew System::String(existingPriceSale.c_str());

            return data;
        }
    }

    return gcnew cli::array<System::String^>(0);
}

cli::array<System::String^>^ takeDataInWarehouse(const string& name) {
    string filePath = "Warehouse.txt";

    ifstream inFile(filePath);
    string line;
    while (getline(inFile, line)) {
        if (line.empty()) continue;


        stringstream ss(line);
        string existingId, existingName, skip1, skip2, skip3, capacityStr, occupancyStr;
        ss >> existingId >> existingName >> skip1 >> skip2 >> skip3 >> capacityStr >> occupancyStr;

        if (existingName == name) {


            cli::array<System::String^>^ data = gcnew cli::array<System::String^>(3);
            data[0] = gcnew System::String(existingName.c_str());
            data[1] = gcnew System::String(occupancyStr.c_str());
            data[2] = gcnew System::String(capacityStr.c_str());



            return data;

        }
    }

}

string replaceSpaces(string text) {

    for (int i = 0; i < text.length(); i++) {

        if (text[i] == ' ') {

            text[i] = '_';
        }
    }

    return text;
}