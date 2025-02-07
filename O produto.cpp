#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
string produtos[2] = { "Batatas", "Cenouras" },
meses[2] = { "Janeiro", "Fevereiro" };
int gastos[100][100];
int totalproduto()
{
	int totalproduto[2] = { 0,0 }, i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			totalproduto[i] = totalproduto[i] + gastos[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		cout << "\n E esse é o total de produtos: " << totalproduto[i] << "do produto " << produtos[i];
	}
	return 0;
}
int valores()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "quantos " << produtos[i] << "usaste no mes " << meses[j];
			cin >> gastos[i][j];
		}
	}
	return 0;
}
int verfify()
{
	for (int i = 0; i < 2; i++)
	{
		int resultado = 0;
		for (int j = 0; j < 2; j++)
		{
			resultado = gastos[j][i] + resultado;
		}
		cout << "No mes de  " << meses[i] << "  Voce comeu  " << resultado << "\n";
	}
	return 0;
}
void main()
{
	int resposta;
	do
	{
		cout << " Que deseja fazer:\nCalcular totais mensais - 1\nCalcular totais por preoduto - 2\nInserir valores - 3\nsair - 0\nIntroduza: ";
		cin >> resposta;
		switch (resposta)
		{
		case 1:
		{
			verfify();
			break;
		}
		case 2:
		{
			totalproduto();
			break;
		}
		case 3:
		{
			valores();
			break;
		}
		}
	} while (resposta != 0);
}