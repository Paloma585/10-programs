#include <iostream>
#include <string>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	std::string nomes[5];
	char resposta = 's';
	do {
		for (i = 0; i < 5; i++)
		{
			std::cout << "Diz-me o " << i + 1 << "º name";
			std::cin >> nomes[i];

		}
		for (i = 4; i >= 0; i--)
		{
			std::cout << nomes[i] << "\n";
		}
		std::cout << "Você de seja sair? (s/n)";
		std::cin >> resposta;

	} while (resposta == 'n');

}