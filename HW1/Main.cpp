#pragma once 
#include <iostream>
#include <iomanip>
#include <utility>
#include <vector>

#include "GroceryItem.hpp"

int main() {

            
     std::cout << std::showpoint << std::fixed << std::setprecision(2)
               << "Welcome to Kroger.  Place grocery items into your shopping cart"
               << " by entering each item's information.\n"
               << " enclose string entries in quotes, separate fields with comas\n"
               << " for example:  \"00016000306707\", \"Betty Crocker\", \"Betty Crocker"
               << " Double Chocolate Chunk Cookie Mix\", 17.19\n"
               << " Enter CTL-Z (Windows) or CTL-D (Linux) to quit\n";

     std::vector<std::unique_ptr <GroceryItem>> shoppingCart;

     GroceryItem a;

     while (std::cout << "Enter UPC, Product Brand, Product Name and Price\n") 
     std:: cin >> a;
     {
     
     shoppingCart.push_back(std::make_unique<GroceryItem> (std::move(a)));
     
     std::cout << "Item added to shopping cart: " << shoppingCart.back() << "\n\n"; 

     }
     
     std::cout << "\n\n Here is an itemized list of the items in your shopping car: \n";
     for (unsigned long i = shoppingCart.size(); i-- > 0; ) std::cout << shoppingCart[i] << std::endl;

     return 0;
}
