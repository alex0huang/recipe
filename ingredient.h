#include <iostream>
#include <string>
#include <vector>


class Ingredient{
   private:
		string ingred_name;
		//double stock_quantity;
		//bool perishable;
        int ingred_protein;
        int ingred_calories;
public:
		Ingredient(){
			ingred_name = "unknown";
			//stock_quantity = 0.0;
            calories_per_100gram = 0;
            ingred_protein = 0;
		}
        Ingredient(string i_name, int cpg, int i_protein) {
            ingre_name = i_name;
            calories_per_100gram = cpg;
            ingred_protein = i_protein;
        }

        void show_ingredient();
        int get_calories();















        /*
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
        */



};
