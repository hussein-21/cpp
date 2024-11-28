#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

class Product {
public:
   void SetPriceAndName(int productPrice, std::string productName); // Set price and name
   int GetPrice() const;                                            // Get the price
   std::string GetName() const;                                     // Get the name
private:
   int price;              // Product price
   std::string name;       // Product name
};
#endif
