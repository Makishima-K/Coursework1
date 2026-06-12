#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <array>
using namespace std;

cli::array<System::String^>^ GetColumn(
    System::String^ filename,
    int columnIndex
);

cli::array<System::String^>^ takeDataInSample(
    const std::string& name
);

cli::array<System::String^>^ takeDataInWarehouse(
    const std::string& name
);
string replaceSpaces(string text);

#endif

