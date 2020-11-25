#include <iostream>
using namespace std;

void rectangle()
{
	float side;
	cout << "Enter the side="; cin >> side;
	cout << "The area of square =" << side*side;
}

void triangle()
{
	float width, height;
	cout << "Enter height="; cin >> height;
	cout << "Enter width="; cin >> width;
	cout << "The area of triangle =" << 0.5*height*width;
}


int main()
{
	char option;
	cout<<"Enter the shape (1)square (2)triangle"; cin >> option;
	if (option == '1')
		rectangle();
	else if (option == '2')
		triangle();
		
	return(1);
}
