#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Animal{
	private:
		int height;
		int weight;
		string name;
		
		static int animalInstances;
		
	public:
		int getHeight() {return height;}
		int getWeight() {return weight;}
		string getName() {return name;}
		void setHeight(int cm) {height = cm;}
		void setWeight(int kg) {height = kg;}
		void setName(string str) { name = str;}
		// if the same name variable is to be used, use this -> 
		// void setName(string str) { this -> name = name;}
		
		// prototype
		// void setAll(int, int, string);
		
		Animal(int, int, string); // constructor (just like the prototype really).
		Animal(); // overloaded constructor with no attributes
		~Animal(); // deconstruction
		static int getNumOfAnimals() {return animalInstances;}
		void toString();
		
	// 	protected:
};

// declare the implementation
int Animal::animalInstances = 0;

Animal::Animal(int height, int weight, string name){
	// set this animal instance's variable
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::animalInstances++;
}

Animal::~Animal(){
	cout << "Destroying " << this -> name << endl;
}

Animal::Animal(){
	Animal::animalInstances++;
}

void Animal::toString(){
	cout 
	<< this -> name << " is " 
	<< this -> height << " cm tall and " 
	<< this -> weight << "kg in weight. " 
	<< endl;
}


class Dog : public Animal{
	private:
		string sound = "Woof";
	public:
		void makeSound() {cout << sound << endl;}
		
		void toString(); // overriding toString method 
		Dog(int, int, string, string);
		Dog(): Animal(){}; // default constructor calling the super 


};

Dog::Dog(int height, int weight, string name, string sound) 
	: Animal(height, weight, name){
	this -> sound = sound;
}

void Dog::toString() {
	// have to use get method to access the private members
	cout 
	<< this -> getName() << " is " 
	<< this -> getHeight() << " cm tall and " 
	<< this -> getWeight() << "kg in weight and " 
	<< this -> sound << "!!" 
	<< endl;
}

int main()
{
	Animal fred; 
	fred.setHeight(33);
	fred.setWeight(2);
	fred.setName("Fred");	
	
	fred.toString();
	
	Animal tom(456, 55, "Tom");
	tom.toString();
	
	Dog spot(38,16,"Spot","Woof");
	spot.toString();
	cout << "Super call toString: " << endl;
	spot.Animal::toString();
	cout << "Spot says: " << endl;
	spot.makeSound();
	
	cout << "Number of animal instances: " << Animal::getNumOfAnimals() << endl;
 	
	return 0;
}
