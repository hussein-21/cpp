#include <string>
#include <iostream>
#include "Store.h"
using namespace std;

int main() {
   Store ourPlace;            // Create a Store object
   string currName;

   cin >> currName;           // Input the store name
   ourPlace.SetName(currName); // Set the store name

   ourPlace.ReadAllProducts(); // Input all products
   ourPlace.PrintSale(2);      // Print product prices after applying a discount of 2

   return 0;
}


////////////////IO///////////////


Input:

MyStore
10 Apples
5 Bananas
0
   
Output:

MyStore's sale:
Apples: 8
Bananas: 3
