#include <iostream>
#include "ingredient.h"
#include <cassert>
using namespace std;

class dish {
	protected: 
		string name; 
		double calories;
		string name;
		Ingredient ingredients[maxingredient];
		double amountPerPortion[maxingredient];
		int ingredientCount;
		
	public:
		Dish(string n , double cal) : name(n) calories (cal){
			ingredientCount = 0;
			
		}
		void addIngredient(string name, dounble quantity£¬ string unint) {
			asscert(ingredientCount<maxingredient);
			ingredients[maxingredient] = Ingredient(name,quantity,unit);
		}
		void display(){
			cout << "Dish:" << name << endl;
			cout <<"Amount of Calories per serving"<< calories << endl;
			cout << "Ingredients in dish "<< endl;
			for (int i = 0; i < ingredientCount; ++i) {
				cout << ingredients[i].name << ":" << ingredients[i].quantity << ingredient[i].unit << endl;

			}
		}
};
