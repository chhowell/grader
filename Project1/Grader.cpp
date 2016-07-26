#include <iostream>
#include "grader.h"

using namespace std;

int main()
{
	int i;
	int c;
	bool check = true;
	bool checkTwo;
	bool checkThree;

	while (check == true)
	{
		checkTwo = true;
		checkThree = true;
		

		while (checkThree == true)
		{
			cout << "Enter numerical score: ";
			cin >> i;

			if (i >= 0 && i <= 100)
			{
				grader(i);
				checkThree = false;
			}

			else
				cout << "Invalid score. Input again. " << endl;
		}

			while (checkTwo == true)
			{
				cout << "Enter 1 to check another grade or 2 to quit: ";
				cin >> c;
				if (c == 1)
				{
					check = true;
					checkTwo = false;
				}

				else if (c == 2)
				{
					check = false;
					checkTwo = false;
				}
				else
					cout << "Invalid choice." << endl;
			}
	}

	system("pause");
	return 0;
}

