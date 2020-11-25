#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//declare variables to use for storing user's input
	
	int choiceOne;
	char choiceTwo;
	char filename[21];
	
	double height, width;
	double area, perimeter, volume;
	double radius, radiusA, radiusB;
	double sideA, sideB;
	double sideC, sideD;
	
	const double PI = 3.1415926;
	bool goagain = true;
	char response;

	ofstream inputFile;
	char line[21];
	
	// function prototypes

	double calcCylinderVolume(double, double);

	cout << fixed << showpoint << setprecision(2);
	
	// User chosing the menu options

	cout << "\nWelcome to the SHAPE program." << endl << endl;
	
	while (goagain == true)
	{	
		cout << "\nPick from the following menu options." << endl;
		cout << "\t 1. Add a shape to a file." << endl;
		cout << "\t 2. Calculate area, perimeter, and volume of shapes in a file." << endl;
		cout << "\t Enter 1 or 2: ";
		cin >> choiceOne;
	
		if (choiceOne == 1)
		{
			cout << "\nYou have chosen to add a shape to a file." << endl;		
			cout << "\n\nPlease enter the name of the file: ";
			cin >> filename;
			ofstream shapes(filename, ios::out);
			cout << "\nWhat shape do you wish to enter?" << endl;
			cout << "\t a. Square" << endl;
			cout << "\t b. Rectangle" << endl;
			cout << "\t c. Parallelogram" << endl;
			cout << "\t d. Trapezoid" << endl;
			cout << "\t e. Circle" << endl;
			cout << "\t f. Ellipse" << endl;
			cout << "\t g. Triangle" << endl;
			cout << "\t h. Cube" << endl;
			cout << "\t i. Cylinder" << endl;
			cout << "\t j. Pyramid" << endl;
			cout << "\t k. Cone" << endl;
			cout << "\t l. Sphere" << endl;
			cout << "\t Choose a lowercase letter between a and m: ";
			cin >> choiceTwo;
			
			switch (choiceTwo)
			{
			
				case 'a': 
						  cout << "\n\nYou want to enter a square." << endl;
						  cout << "Enter the height of the square: ";
						  cin >> height;
						  inputFile.open(filename, ios::out);
								if (! inputFile)
								cout << "Error opening file.";
		    			  inputFile << "SQUARE:\r\n";
						  inputFile << height;
						  inputFile.close();

						  cout << "\nYou have entered a shape in " << filename << ". \n";
						  break;
				case 'b': cout << "\n\nYou want to enter a rectangle.\n";
						  cout << "Enter the width of the rectangle: ";
						  cin >> width;
						  cout << "Enter the height of the rectangle: ";
						  cin >> height;
						  inputFile.open(filename, ios::out | ios::app);
								if (! inputFile)
								cout << "Error opening file.";
		    			  inputFile << "RECTANGLE:\r\n";
						  inputFile << width << "\r\n";
						  inputFile << height;
						  inputFile.close();

						  cout << "\nYou have entered a shape in " << filename << ". \n";
						  break;
				case 'c': cout << "You want to enter a parallelogram.\n";
						  break;
				case 'd': cout << "You want to enter a trapezoid.\n";
						  break;
				case 'e': cout << "You want to enter a circle.\n";
						  break;
				case 'f': cout << "You want to enter a ellipse.\n";
						  break;
				case 'g': cout << "You want to enter a triangle.\n";
						  break;
				case 'h': cout << "You want to enter a cube.\n";
						  break;
				case 'i': cout << "You want to enter a cylinder.\n";
						  break;
				case 'j': cout << "You want to enter a pyramid.\n";
						  break;
				case 'k': cout << "You want to enter a cone.\n";
						  break;
				case 'l': cout << "You want to enter a sphere.\n";
						  break;						  
						  
				default:  cout << "You did not enter any letter from a to l.\n";
			}
		}
		else if (choiceOne == 2)
		{
			cout << "\nYou have chosen to calculate area, perimeter ";
			cout << "and/or volume of shapes from a file.";
		}
		else
			cout << "You did not enter a valid choice of 1 or 2.\n";
			cout << "\nDo you wish to run the program again? <y/n>: ";
			cin >> response;
			if (response == 'n' || response == 'N')
				goagain = false;
				
	} //end of while loop
	
	cout << endl;
	
	return 0;

}//end of main function 
