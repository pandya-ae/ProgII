#include <iostream>
using namespace std;
//OVERRIDE

class Human {
	public:
	int age;
	void check(int a){
		cout << "parent = " << a;
	}
};

class Student : public Human {
	public:
	char jns_kel;
	void check(int a, int b){
		cout << "parent = " << a*b;
	}
};

int main()
{
	Student x;
	x.jns_kel = 77;
	x.age = 17;
	x.check(3);
}
