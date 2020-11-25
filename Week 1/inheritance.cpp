#include <iostream>
using namespace std;
//INHERITANCE
class Human {
	public:
	int age;
};

class Student : public Human {
	public:
	char jns_kel;
};

int main()
{
	Student x;
	x.jns_kel = 77;
	x.age = 17;
	cout << "age=" << x.age << "jns_kel=" << x.jns_kel;
}
