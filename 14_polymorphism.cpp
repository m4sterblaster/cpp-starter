#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Animal{
	public:
		void getFamily() {cout << "mammals" << endl;}
		// virtual ~ protected in terms of method overloading PLOYMORPHISM
		virtual void getClass() { cout << "I'm an animal." << endl;}
};

class Dog : public Animal{
	public: 
		void getClass() {cout << "I'm a dog." << endl;}
};

class GermanShepherd : public Dog{
	public: 
		void getClass() {cout << "I'm a German Shepherd." << endl;}
};

void classCheck(Animal *animal){
	// virtual will indicate a check for subclass implementaion 
	animal -> getClass();
}


// abstract data type (~interface)
class Car {
	public: 
		virtual int getNumWheels() = 0;
		virtual int getNumDoors() = 0;
};

class StationWagon : public Car{
	public: 
		int getNumWheels() {cout << "Station wagon has 4 wheels" << endl;}
		int getNumDoors() {cout << "Station wagon has 4 doors" << endl;}
		StationWagon() {};
		~StationWagon();
};

int main()
{
	Animal *animal = new Animal; 
	Dog *dog = new Dog;	
	
	// calling the method on the class, virtual does not matter
	animal->getClass();
	dog->getClass(); 	
	
	// polymorphism
	classCheck(animal);
	classCheck(dog);
	classCheck(new GermanShepherd);
	
	
	// TODO
	// why did we not need to call new here to refer to an object? Guess it automatically used the no param constructor?
	Dog spot; 
	GermanShepherd max;

	Animal* spotPtr = &spot;
	Animal* maxPtr = &max;
	
	spotPtr -> getFamily();
	spotPtr -> getClass();
	maxPtr -> getFamily(); // can access superclass methods
	maxPtr -> getClass();
	
	Car* stationWagon = new StationWagon;
	stationWagon -> getNumWheels();
	
	return 0;
}
