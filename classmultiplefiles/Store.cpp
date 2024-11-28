#include <iostream>
#include "Store.h"
using namespace std;

void Store::SetName(string storeName) {
   name = storeName;                       // Set the store name
}

void Store::ReadAllProducts() {
   products.InputProducts();               // Read all products
}

void Store::PrintSale(int saleAmount) {
   cout << name << "'s sale:" << endl;     // Print the store name
   products.PrintAfterDiscount(saleAmount); // Print discounted prices
}
