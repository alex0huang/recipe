#ifndef DISH_H
#define DISH_H

#include <iostream>
#include <string>
#include <vector>
#include "ingredient.h"

using namespace std;
const int MAX_INGREDIENTS = 20;
const double STANDARD_PORTION = 200;
// 200 grams for each portion in book regardless of type

class Dish {
	public: 
		string name; 
		double calories;
        int num_ingredients;
        int prep_time;
        int cook_time;

        // Constructor
        Dish(){
            num_ingredients = 0;
            calories = 0;
            name = "unknown";	
            cook_time = 0;
            prep_time = 0;

            // Will help us organize
            bool meal = false;
            bool dessert = false;
            bool snack = false; 
        }
        Dish(string n , double cal) : name(n) , calories(cal){
			num_ingredients = 0;
            cook_time = 0;
            prep_time = 0;

            // Will help us organize
            bool meal = false;
            bool dessert = false;
            bool snack = false; 

		}

        // Array of needed ingredient objects
		Ingredient ingredients[MAX_INGREDIENTS];
        // Amount based on 200 grams - 
		double amount_per_portion[MAX_INGREDIENTS];

		int num_ingredients;

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

#endif