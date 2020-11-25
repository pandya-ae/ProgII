#include <iostream>
using namespace std;

class Bangun
{
	public:
	
	float rectangle()
	{
		float side;
		cout << "Enter the side="; cin >> side;
		return(side*side);
	}

	float triangle()
	{
		float width, height;
		cout << "Enter height="; cin >> height;
		cout << "Enter width="; cin >> width;
		return(0.5*height*width);
	}
};


int main()
{
	Bangun x;
	char option;
	float area;
	
	cout<<"Enter the shape (1)square (2)triangle"; cin >> option;
	if (option == '1')
		area = x.rectangle();
	else if (option == '2')
		area = x.triangle();
	
	cout << "Area = " << area;
		
	return(1);
}
