#include "dish.h"
#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

class Dish {
	// Editors
    // Adds ingredient in given qunittiy to dish serached by name
	void add_ingredient(Ingredient new_ingredient);
    void change_dish_name(string new_name);
		
    // Viewers
    // Display list of ingredients
    void display_ingredients();
    // Display ingredients and quanitites for single portion
    void display_ingredients_values();

        // Calculators
        // Prints out an array of ingredients with quanitities based on desired quantity
        void ingredients_by_weight(double desired_quantity);

};
