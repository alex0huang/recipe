#include <iostream>
using namespace std;

class dish {
	protected: 
		string name; 
		double calories;
		
	public:
		Dish(string n , double cal) : name(n) calories (cal){}
		void display(){
			cout << "Dish:" << name << endl;
			cout <<"Amount of Calories per serving"<< calories << endl;
		}
};
