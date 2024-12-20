#include <iostream>
#include <string>
#include <time.h>
void main()
{
	int i, nome;
	std::string boyfriends[5] = { "Jose", "Pedro", "Bruno", "Luis", "Bernardo" },
	places[5] = { "Praia", "Bolling", "Restaurante", "Geladaria", "Parque de diversoes" };
	srand(time(0));
	
		std::cout<<boyfriends[rand() % 5];
	
		std::cout << places[rand() % 5];
}  