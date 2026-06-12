#ifndef WRITE_DATA_H
#define WRITE_DATA_H

#include <string>

int writeDataProductSample(
    const std::string& name,
    int count_on_one_pallet,
    bool is_expiration_date,
    int shelf_life_days,
    double price_buy,
    double price_sale
);

int writeDataProductSale(
    const std::string& name,
    int count,
    bool lost
);

int writeDataProductBuy(
    const std::string& name,
    int count,
    const std::string& address,
    bool buy
);

int writeDataWarehouse(const std::string& name, int width, int height, int floors, int capacity);




#endif