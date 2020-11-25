#include <iostream>
using namespace std;
class Bangun
{
	public:
	float area;
	
	
	
	private:
	void rectangle()
	{
		float side;
		cout << "Enter the side="; cin >> side;
		area = side*side;
		cout << "area" << area;
	}
	
	public:
	void triangle()
	{
		float width, height;
		cout << "Enter height="; cin >> height;
		cout << "Enter width="; cin >> width;
		area = 0.5*height*width;
		cout << "area" << area;
	}
};
int main()
{
	Bangun x;
	char option;
	cout<<"Enter the shape (1)square (2)triangle"; cin >> option;
	if (option == '1')
		x.rectangle();
	else if (option == '2')
		x.triangle();		
	cout << x.area;
	return(1);
}
