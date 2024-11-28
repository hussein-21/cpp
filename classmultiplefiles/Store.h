#ifndef STORE_H
#define STORE_H

#include "Products.h"

class Store {
   public:
      void SetName(std::string storeName); // Set store name
      void ReadAllProducts();             // Input products
      void PrintSale(int saleAmount);     // Print sale prices
   private:
      std::string name;                   // Store name
      Products products;                  // Store's products
};
#endif
