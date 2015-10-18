
#include <iostream>
#include <ctype>

typedef unsigned int UINT;

enum colour {red = 1, green, blue};


int main ()
{
	UINT option(0);
	
	cout << "\nset snake's skin" << '\n';
	cin  >> option;
	
	colour snakeskin = static_cast <colour>(option);
	switch (snakeskin)
	{
		case red: system("color 3"); break;
		case green: system("color 5"); break;
		case blue: system("color 7"); break;
		default:break;
	}
	
	return 0;
	
}