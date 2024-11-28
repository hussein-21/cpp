#include <iostream>
#include "Products.h"
using namespace std;

void Products::InputProducts() {
   Product currProduct;
   int currPrice;
   string currName;

   cin >> currPrice;                              // Input first product price
   while (currPrice > 0) {                        // Loop until price <= 0
      cin >> currName;                            // Input product name
      currProduct.SetPriceAndName(currPrice, currName); // Set price and name
      productList.push_back(currProduct);        // Add to product list
      cin >> currPrice;                          // Input next product price
   }
}

void Products::PrintAfterDiscount(int discountPrice) {
   unsigned int i;
   int currDiscountPrice;

   for (i = 0; i < productList.size(); ++i) {    // Iterate through product list
      currDiscountPrice = productList.at(i).GetPrice() - discountPrice; // Apply discount
      cout << productList.at(i).GetName() << ": " << currDiscountPrice << endl;
   }
}
