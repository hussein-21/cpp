#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <vector>
#include "Product.h"

class Products {
   public:
      void InputProducts();                         // Input product list
      void PrintAfterDiscount(int discountPrice);  // Print prices after discount
   private:
      std::vector<Product> productList;            // Vector to store products
};
#endif
