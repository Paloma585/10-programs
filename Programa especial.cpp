#include <iostream>
#include <string>
void main()
{
	int Numeros[20], Novo, i, contar = 0;
	for (i = 0; i < 20; i++)
	{
		std::cout << "Diz-me um número: ";
		std::cin >> Numeros[i];
	}
	std::cout << "Diz-me que numero queres encontrar: ";
    std::cin >> Novo;
	for (i = 0; i < 20; i++)
	{
		if (Numeros[i] == Novo)
		{
			contar++;
		}
	}
	if (contar > 0)
	{
		std::cout << "Encontrei!";
	}
	else
	{
		std::cout << "Não há nenhum numero igual a esse";
	}
}