#include "Product.h"
using namespace std;

void Product::SetPriceAndName(int productPrice, string productName) {
   price = productPrice;   // Assign price
   name = productName;     // Assign name
}

int Product::GetPrice() const {
   return price;           // Return the price
}

string Product::GetName() const {
   return name;            // Return the name
}
