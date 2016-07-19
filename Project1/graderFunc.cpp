#include <iostream>

void grader(int n)
{
	using namespace std;

	if (n <= 100 && n >= 90)
		cout << "You scored an A." << endl;

	else if (n <= 89 && n >= 80)
		cout << "You scored a B." << endl;

	else if (n <= 79 && n >= 70)
		cout << "You scored a C." << endl;

	else if (n <= 69 && n >= 60)
		cout << "You scored a D." << endl;

	else
		cout << "You flunked, sorry." << endl;
	
}