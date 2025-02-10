#include <iostream>
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
		void display(){
			cout << "Dish:" << name << endl;
			cout <<"Amount of Calories per serving"<< calories << endl;
		}
};
