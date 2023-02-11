include <iostream>
include <iomanip>

include #utility
include #vector

#include "GroceryItem.hpp"

int main() {

            
     std::cout << std::showpoint << std::fixed << std::setprecision(2)
               << "Welcome to Kroger.  Place grocery items into your shopping cart"
               << " by entering each item's information.\n"
               << " enclose string entries in quotes, separate fields with comas\n"
               << " for example:  \"00016000306707\", \"Betty Crocker\", \"Betty Crocker"
               << " Double Chocolate Chunk Cookie Mix\", 17.19\n"
               << " Enter CTL-Z (Windows) or CTL-D (Linux) to quit\n";

}