#include <conio.h>
#include <iostream>

using namespace std;

void main()
{

	int Fizz = 3, Buzz = 5;

	for (int i = 1; i < 101; i++)
	{

		if (((i % Fizz) == 0) && ((i % Buzz) != 0))
		{
			cout << "Fizz" << endl;
		}
		else if (((i % Buzz) == 0) && ((i % Fizz) != 0))
		{
			cout << "Buzz" << endl;
		}
		else if (((i % Fizz) == 0) && ((i % Buzz) == 0))
		{
			cout << "Fizz + Buzz" << endl;
		}
		else
			cout << i << endl;

	}

	_getch();

}