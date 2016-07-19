#include <iostream>
//#include "graderFunc.cpp"
#include "grader.h"

using namespace std;

int main()
{
	int i;
	int c;
	bool check = true;
		
	while (check == true)
	{
		cout << "Enter numerical score: ";
		cin >> i;

		if (i >= 0 && i <= 100)
			grader(i);

		cout << "Enter 1 to check another grade or 2 to quit: ";
		cin >> c;
		if (c == 1)
			check = true;
		else
			check = false;
	}

	system("pause");
	return 0;
}

