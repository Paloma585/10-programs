#include <iostream>
#include <string>
void main()
{
	int i,resultado, palavra[1000];
	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	for (i = 0; i < 1000; i++)
	{
		std::cout << "Diz a frase";
		std::cin >> palavra[i];
	}
	for (i = 0; i < 26; i++)
	{
		resultado = 'a' + 'p' + 'a', 'b' + 'p' + 'b', 'c' + 'p' + 'c', 'd' + 'p' + 'd', 'e' + 'p' + 'e', 'f' + 'p' + 'f', 'g' + 'p' + 'g',
			'h' + 'p' + 'h', 'i' + 'p' + 'i', 'j' + 'p' + 'j', 'k' + 'p' + 'k', 'l' + 'p' + 'l', 'm' + 'p' + 'm', 'n' + 'p' + 'n', 'o' + 'p' + 'o',
			'p' + 'p' + 'p', 'q' + 'p' + 'q', 'r' + 'p' + 'r', 's' + 'p' + 's', 't' + 'p' + 't', 'u' + 'p' + 'u', 'v' + 'p' + 'v', 'w' + 'p' + 'w',
			'x' + 'p' + 'x', 'y' + 'p' + 'y', 'z' + 'p' + 'z';
		resultado + palavra;
	}std::cout << resultado;
}