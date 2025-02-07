#include <iostream>
#include <string>
#include <locale.h>
int acharmenor(int s[10])
{
	int resultado = s[0], i;
	for (i = 0; i < 10; i++)
	{
		if (resultado > s[i])
		{
			resultado = s[i];
		}
	}
	return resultado;
}
int acharmaior(int s[10])
{
	int resultado = s[0], i;
	for (i = 0; i < 10; i++)
	{
		if (resultado < s[i])
		{
			resultado = s[i];
		}
	}
	return resultado;
}
int acharsoma(int s[10])
{
	int resultado = 0, i;
	for (i = 0; i < 10; i++)
	{
		resultado = resultado + s[i];
	}
	return resultado;
}
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int i, j, N[10], soma = 0, maior, menor, escolha = 0;
	do
	{
		cout << "Diz aí 10 números\n";
		for (i = 0; i < 10; i++)
		{
			cin >> N[i];
		}
		soma = acharsoma(N);
		maior = acharmaior(N);
		menor = acharmenor(N);
		cout << "\n Escolha 1 opção \n 1 - Calcular media\n 2- calcular menor\n 3- calcular maior\n 0- Sair \n";
		cin >> escolha;
		switch (escolha) {
		case 1:
			cout << "A média é: " << soma / 10 << "\n";
			break;
		case 2:
			cout << "O menor é: " << menor << "\n";
			break;
		case 3:
			cout << "O maior é: " << maior << "\n";
			break;
		}
	} while (escolha != 0);
}