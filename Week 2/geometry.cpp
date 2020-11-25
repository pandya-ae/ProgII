#include <iostream>
#include <string>
#define PI 3.1415926
using namespace std;

///////////////////------------------Variables---------------/////////////////////////
int choice;
char continue_running = 'y';

double circleRadius;
double sphereRadius;
double cylinderRadius,cylinderHeight;
double coneRadius,coneHeight;
double major, minor;

///////////////////------------------Functions--------------/////////////////////////
void circle(double r)
{
    cout << "Perimeter = " << PI * 2 * r;
    cout << "Area = " << PI * r * r;
}

void sphere(double r)
{
    cout << "Area = " << (4) * r * r * PI;
    cout << "Volume = " <<  (4/3) * r * r * r * PI;
}

void cylinder(double r, double h)
{
    cout << "Area = " << (2 * PI * r * h) + 2* PI * r * r;
    cout << "Volume = " << PI * r * r * h;
}

void cone(double r, double h)
{
    cout << "Area = " << (PI * r * h) + (PI * r * 2);
    cout << "Volume = " <<  (1/3) * PI * r * r * h  ;
}

void ellipse(double m, double n)
{
    cout << "Area = " << PI * m * n;
}

///////////////////------------------Main---------------/////////////////////////
int main() 
{
    while(continue_running == 'y')
	{
	cout <<"This program calculates the perimeter and the surface area for the following figures"<< endl;
	cout <<"The figures and the shapes are listed below:"<< endl;
	cout <<"1. Circle (INPUT radius)"<<endl;
	cout <<"2. Sphere (INPUT radius)"<<endl;
	cout <<"3. Cylinder (INPUT radius and height)"<< endl;
	cout <<"4. Cone (INPUT radius and height)"<< endl;
	cout <<"5. Ellipse (INPUT major and minor axes)"<< endl;

	cout<< "Enter Choice >> ";
	cin >> choice;


	switch(choice)
	{
	    case 1:

	    	cout<< "Enter radius >> ";
	        cin >> circleRadius;
	        circle(circleRadius);
	        break;

	    case 2:
	    	cout<< "Enter radius >> ";
	        cin >> sphereRadius;
	        sphere(sphereRadius);
	        break;

	    case 3:
	    	cout<< "Enter radius, height >> ";
	        cin >> cylinderRadius >> cylinderHeight;
	        cylinder(cylinderRadius, cylinderHeight);

	        break;

	    case 4:
	    	cout<< "Enter radius, height >> ";
	        cin >> coneRadius >> coneHeight;
	        cone(coneRadius, coneHeight);
	        break;

	    case 5:
	    	cout<< "Enter major, minor axes >> ";
	        cin >> major >> minor;
	        ellipse(major, minor);
	        break;

	    default:
	        cout << "Wrong Choice, try again"<<endl;
	        break;
	}
	cout << endl << "Repeat? (y/n)"<< endl;
	cin >> continue_running;
	}
	return 0;
}
