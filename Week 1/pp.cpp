#include <iostream>
using namespace std;

struct input
{
	string name;
	string address;
	string dob;
};

int main()
{

	input x[10];
	
	cout << "Enter the number of students: ";
	int input_n;
	(cin >> input_n).get();
	
	cout << "Student Data INPUT" << endl;
	cout << "------------------" << endl;

	for (int i = 0; i < input_n; i++)
	{
		cout << endl << "Student #" << i+1 << endl;

		cout << "Name		: ";
		getline (cin, x[i].name);
		cout << "Address		: ";
		getline (cin, x[i].address);
		cout << "Date of Birth	: ";
		getline (cin, x[i].dob);
	}

	cout << endl << "Student Data OUTPUT" << endl;
	cout << "-------------------" << endl;

	for (int j = 0; j < input_n; j++)
	{
		cout << endl << "Student #" << j+1 << endl;
		
		cout << "Name		: " << x[j].name << endl; 
		cout << "Address		: " << x[j].address << endl; 
		cout << "Date of Birth	: " << x[j].dob << endl;
	}
}
