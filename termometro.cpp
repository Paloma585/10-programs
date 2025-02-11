#include <iostream>
#include <string>
using namespace std;
void main()
{
	int temparatura1, temparatura2, temdec1, tempdec2;
	cin >> temparatura1;
	cin >> temdec1;
	cin >> temparatura2;
	cin >> tempdec2;
	if (temparatura2 >= temparatura1)
	{
		if (tempdec2 >= temdec1)
		{
			cout << "A temperatura subiu";
		}
	}
	if (temparatura2 == temparatura1)
	{
		if (tempdec2 == temdec1)
		{
			cout << "A temperatura manteve";
		}
	}
	if (temparatura2 <= temparatura1)
	{
		if (tempdec2 <= temdec1)
		{
			cout << "A temperatura desceu";
		}
	}
	if (temparatura1 < 37)
	{
		if (temparatura2 < 37)
		{
			if (temdec1 < 9)
			{
				if (tempdec2 < 9)
				{
					cout << "temperatura normal";
				}
			}
		}

	}



