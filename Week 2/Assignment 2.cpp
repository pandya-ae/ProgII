#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class A // Parent class A: cube, cuboid, and pyramid
{
	protected:
		int length, width, height;
		float vol;
	public:
		A() // Constructor
		{
			vol = 0;
		}
		A(int a, int b, int c) // Overload
		{
			getVolume(a, b, c);
		}
		void getVolume (int p, int q, int r)
		{
			vol = p * q * r;
		}
		void userInput()
		{
			cout << "Length" << setw(4) << ": "; cin >> length;
			cout << "Width" << setw(5) << ": " ; cin >> width;
			cout << "Height" << setw(4) << ": "; cin >> height;
		}
		void displayVolume ()
		{
			cout << "Volume" << setw(4) << fixed << setprecision(2) << ": " << vol;
		}
	
};

class Cube:public A // Inherited class
{	
	private:
		int side;
	public:
		void getCube()
		{
			cout << "Side" << setw(6) << ": "; cin >> side;
			getVolume(side, side, side);
			displayVolume();
		}			
};

class Cuboid:public A // Inherited class
{
	public:
		void getCuboid()
		{
			userInput();
			getVolume(length, width, height);
			displayVolume();
		}				
};

class Pyramid:public A // Inherited class
{	
	public:
		void getPyramid()
		{
			userInput();
			getVolume(length, width, height);
			vol = vol / 3;
			displayVolume();
		}	
};

class B // Parent class B: cone and cylinder
{
	protected:
		int radius, height;
		float vol;
	public:
		B() // Constructor
		{
			vol = 0;
		}
		B(int a, int b) // Overload
		{
			getVolume(a, b);
		}
		void getVolume (int x, int y)
		{
			vol = M_PI * (pow(x,2) * y);
		}
		void userInput()
		{
			cout << "Radius" << setw(4) << ": "; cin >> radius;
			cout << "Height" << setw(4) << ": "; cin >> height;
		}
		void displayVolume ()
		{
			cout << "Volume" << setw(4) << fixed << setprecision(2) << ": " << vol;
		}	
};

class Cone:public B // Inherited class
{
	public:
		void getCone()
		{
			userInput();
			getVolume(radius, height);
			vol = vol / 3;
			displayVolume();		
		}			
};

class Cylinder:public B // Inherited class
{
	public:
		void getCylinder()
		{
			userInput();
			getVolume(radius, height);
			displayVolume();		
		}				
};


int main(){ // Driver
	int option;
	string enter;
	cout << "3D Shapes Volume Calculator" << endl;
	cout << "---------------------------" << endl;
	A objA; Cube objA1; Cuboid objA2; Pyramid objA3;
	B objB; Cone objB1; Cylinder objB2; 
	cout << "Please choose one of the 3D shapes below: " << endl;
	cout << "1. Cube" << endl;
	cout << "2. Cuboid" << endl;
	cout << "3. Pyramid" << endl;
	cout << "4. Cone" << endl;
	cout << "5. Cylinder" << endl;
	cout << "6. Exit the program" << endl;
	cout << "Option: ";
	cin >> option;
	switch (option){
		case 1: 
			system("cls");
			cout << "Cube" << endl;
			objA1.getCube(); cout << endl;
			cout << "Enter any key: ";
			cin >> enter;
			system("cls");
			main();
			break;
		case 2: 
			system("cls");
			cout << "Cuboid" << endl;
			objA2.getCuboid(); cout << endl;
			cout << "Enter any key: ";
			cin >> enter;
			system("cls");
			main();
			break;
		case 3: 
			system("cls");
			cout << "Pyramid" << endl;
			objA3.getPyramid(); cout << endl;
			cout << "Enter any key: ";
			cin >> enter;
			system("cls");
			main();
			break;
		case 4: 
			system("cls");
			cout << "Cone" << endl;
			objB1.getCone(); cout << endl;
			cout << "Enter any key: ";
			cin >> enter;
			system("cls");
			main();
			break;
		case 5: 
			system("cls");
			cout << "Cylinder" << endl;
			objB2.getCylinder(); cout << endl;
			cout << "Enter any key: ";
			cin >> enter;
			system("cls");
			main();
			break;
		case 6:
			system("cls");
			cout << "Program Terminated";
			break;
		default: 
			system("cls");
			cout << "Error" << endl;
			cout << "Invalid input." << endl;
			cout << "Enter any key: ";
			cin >> enter;
			system("cls");
			main();
			break;		
	}	
}
