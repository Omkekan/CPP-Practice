#include <iostream>
using namespace std;
/*
Class and their relationship 
A class can be in IS-A (Inheritance)relationship or HAS-A(Containership) relationship. 

IS-A:A base class is a superclass of a derived class. 
A child is inheriting from a parent. It exists in an "is-a" relationship. 

HAS-A:Also known as containership, where one class is part of another class. Generally used to define complex entities or an entity which is a combination of multiple small entities 
example:Car has an engine. 

*/
class Engine
{
	public:
		void start()
		{
			cout<<"BHROOOOOM";
		}
};
class Car
{
	public:
		
	Engine e;
	void start_car()
	{
		e.start();
		cout<<"\nCar started......";
	}
	
};
int main()
{
    Car obj;
    obj.start_car();
    
	return 0;
}
