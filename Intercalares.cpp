#include <iostream>
#include <string>
void main()
{
	int i, valueA[10], valueB[10], Total[20], Pos = 0, maior, posicao;
	for (i = 0; i < 10; i++)
	{
		std::cout << "Tell me a value A\n";
		std::cin >> valueA[10];
		std::cout << "Give me a value B\n";
		std::cin >> valueB[10];
	}
	for (i = 0; i < 20; i++)
	{
		Total[i] = valueA[Pos];
		i = i + 1;
		Total[1] = valueB[Pos];
		Pos = Pos + 1;
	}
	for (i = 0; i < 20; i++)
	{
		std::cout << Total[i] << " ";
	}
	for (i = 0; i < 20; i++)
	{
		if (Total[i] > maior)
		{
			maior = Total[i];
			posicao = i;
		}
	}std::cout << "O numwero maior e o : " << maior << "e estava na posicao : " "<< posicao\n";
}