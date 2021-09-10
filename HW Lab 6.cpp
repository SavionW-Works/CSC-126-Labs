#include <iostream> 
#include <iomanip> 
#include <string> 
#include <cstdlib> 
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


// HW LAB 6 

void shiftNums(int&, int&, int&, int&);

void main()
{
	int x = 6;
	int y = 7;
	int z = 9;
	int w = 11;

	cout << x << y << z << w << "\n";
	
	shiftNums(x,y,z,w);  

	cout << x << y << z << w << "\n";
	
} 


void shiftNums(int & a, int & b, int & c, int & d) {
	int hold1, hold2;

	hold1 = a; 
	hold2 = b;
	a = d; 
	b = hold1;   
	d = c; 
	c = hold2;
} 

/* 
Terminal Output: 
67911
11679

C:\Users\Savion\source\repos\HW Lab 6\Debug\HW Lab 6.exe (process 5372) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .






*/