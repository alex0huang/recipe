#include <iostream>
#include <string>
#include <vector>


class Ingredient{
   public:
		string ingred_name;
		double stock_quantity;
		bool perishable;
        int calories;
	
		Ingredient(){
			ingred_name = "unknown";
			stock_quantity = 0.0;
            calories = 0;
		}

		// Viewers

        // Print out each ingredient + quanitity
		void display_stock();
        void display_pantry();
        


        // Editor
        // Add stock to an ingredient
        void add_ingredient_stock(double addend);
        // When using an ingredient in a recipe subtract the amount used
        void use_ingredient(double quant_used);
        // Change stock to given quanitity
        void update_ingredient_stock(double new_quanitity);
        // Clears stock for all perisable items
        void remove_perishables();
        // restocks each ingredient to 500 grams + if not cleared ingredient
        // Then changes to 500 grams
        void restock();
    



};
