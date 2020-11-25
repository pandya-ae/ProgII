#include <iostream>
using namespace std;
  
double x,y;  

class point {
public:
  double x, y;
  
public:
  // Non-default Constructor & default Constructor
  point (double px, double py) {
    x = px, y = py;
  }
  
  void print(int x, int y)
  {
	  cout << "x=" << x << " y=" << y << endl;
	  cout << "x=" << this->x << " y=" << this->y << endl;
  }
};
  
int main(void) {  
  // Remove above line and program will compile without error
  x=0; y=0;
  point b = point(5, 6);
  b.print(x,y);
} 
