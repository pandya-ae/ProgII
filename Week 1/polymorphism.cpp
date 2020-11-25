#include <iostream>
using namespace std;

int mul(int a){
	return (a);
}

int mul(int a, int b){
	return (a*b);
}

int mul(int a, int b, int c){
	return (a*b*c);
}

int main()
{
	cout << mul(3) << endl;
	cout << mul(3,4) << endl;
	cout << mul(3,4,5) << endl;
}
