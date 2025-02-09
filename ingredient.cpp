#include <iostream>
using namespace std;

class Ingredient {
public:
	string name;
	string quantity;
	Ingredient{
		name = "unknown"
		quantity = "unknown"
	}
	void displayIngredient() {
		cout << "Name of Ingredient:" << name << "Amount of Ingredient :" << quantity << endl;
	}
};
