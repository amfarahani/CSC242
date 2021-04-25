#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double radius, area;
	int PIE = 3.1459;

	cout << "Enter radius\n";
	//Add code to read user input and store in variable radius
	cin >> radius;
	
	area = radius * radius * PIE;

	cout << "The Area of the circle is: \n" << area << endl;

	//Calculate the area of the circle
	return 0;
}