#include <iostream>
#include <string>
void main()
{
	int array[10], i, bolo, numbers, mambo, contador = 0, somador = 0;
	for (i = 0; i < 10; i++)
	{
		std::cout << "Diz o" << i + 1 << "numero \n";
		std::cin >> array[i];
	}
	std::cout << "Queres somar negativos? (1) ou contar negativos?(2)\n";
	std::cin >> bolo;
	switch (mambo);
	std::cin >> mambo;
	switch (mambo)
	{
	case 1:
		for (i = 0; i < 10; i++)
		{
			if (array[i] < 0)
			{
				contador = contador + 1;
			}
		}
		std::cout << "Inseriste " << contador << " números negativos";
		break;
	case 2:

		for (i = 0; i < 10; i++)
		{
			if (array[i] < 0)
			{
				somador = somador + array[i];
			}
		}
		std::cout << "O somatório de todos os negativos é: " << somador << "!!!!";
		break;
	default:
		break;
	}
}


	




