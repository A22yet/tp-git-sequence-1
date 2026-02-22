//affiche un message de bienvenue
#include <iostream>
#include <string>
#include <cstdlib>
#include "fonction-bienvenue.h"
int main(int argc, char *argv[])
{
	std::string message = "Bienvenue le monde!";
	int nb = 1;
	if (argc >= 2)
		message = argv[1];
	if(argc >= 3)
		nb = std::atoi(argv[2]);
	afficherBienvenue(message, nb);
	return 0;
}
