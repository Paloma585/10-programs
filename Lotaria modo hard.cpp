#include <iostream>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "");
	int i, number;
	
	do{
		std::cout << "Diz um número";
		std::cin >> number;
	} while (number < 0 || number > 100);
	for (i = 0; i >= 0; i--)
	{
		if (i % 2 != 0)
		{
			std::cout << i << "\n";
		}

	}

}