 // polymorphic functions with the virtual keyword

#include <iostream>
using namespace std;

// class declaration and implementation part
// the base class

class Shape
{
// protected member variables should be available for derived classes
	protected:
	char* Color;

	public:
	// constructor, set the object's data

	Shape()
	{
		cout<<"In base class Shape's constructor"<<endl;
		Color = "No Color!";
	}

	~Shape()
	{
		cout<<"In base class Shape's destructor"<<endl;

	};

	// virtual base member function, return the object's data
	virtual char* GetColor()
	{	
		return Color;
	}

};

 

// the derived class

class Rectangle:public Shape
{
	// notice the same variable name, it is OK, it is local to this class
	char* Color;
	public:

	Rectangle(){
		cout<<"In derived class Rectangle's constructor"<<endl;
		Color = "bLue SkY!";}
	~Rectangle(){ cout<<"In derived class Rectangle's destructor"<<endl;}

		// derived class member function, should also be virtual

	char* GetColor() {
		return Shape::Color;
	}

};

// the derived class
class Square:public Shape
{

	char* Color;
	public:
	Square() 	{
		cout<<"In derived class Square's constructor"<<endl;
		Color = "yEllOw!";}
	~Square()	{
		cout<<"In derived class Square's destructor"<<endl;
	}

	char* GetColor(){
		return Color;
	}
};

 

// the derived class

class Triangle:public Shape
{
	char* Color;

	public:

	Triangle()	{
		cout<<"In derived class Triangle's constructor"<<endl;
		Color = "GrEEn!"; 	}

	~Triangle()	{
		cout<<"In derived class Triangle's destructor"<<endl; 
	}

	char* GetColor()	{
		return Color;
	}
};

 

	// the derived class

class Circle:public Shape
{

	char* Color;
	public:

	Circle() 	{
		cout<<"In derived class Circle's constructor"<<endl;
		Color = "aMbEr!";
	}

	~Circle()	{
		cout<<"In derived class Circle's destructor"<<endl;
	}

	// let set different function name but same functionality
	char* GetMyColor()	{
		return Color;
	}
};

 

// the main program

int main(void)

{
	// instantiate objects of the previously defined class types

	Shape ObjOne;		//this has one destructor
	Rectangle ObjTwo;	//has two desturctors (parent and child's destructor)
	Square ObjThree;	//has two desturctors (parent and child's destructor)
	Triangle ObjFour;	//has two desturctors (parent and child's destructor)
	Circle ObjFive;		//has two desturctors (parent and child's destructor)

	//cout<<endl;
	//cout<<"Non-polymorphic, early binding:"<<endl;
	//cout<<"----------------------------------"<<endl;
	//cout<<"Shape color: "<<ObjOne.GetColor()<<endl;
	//cout<<"Rectangle color: "<<ObjTwo.GetColor()<<endl;
	cout<<"Circle color: "<<ObjFive.GetColor()<<endl;	//it has getColor() from the parent
	cout<<"Circle color: "<<ObjFive.GetMyColor()<<endl;	//it has getMyColor() from itself
	//cout<<"Square color: "<<ObjThree.GetColor()<<endl;
	//cout<<"Triangle color: "<<ObjFour.GetColor()<<endl;

	// notice the different function name as previous function
}
