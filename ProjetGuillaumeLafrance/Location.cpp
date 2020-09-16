// But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
// automobile louée
// Auteur : Guillaume Lafrance
// Date : 2020-09-16



#include <iostream>

void main()
{

	setlocale(LC_ALL, "");
	int kilomètres;
	int jours;
	// Initialiser les variables

	std::cout << "Veuillez entrer le nombre de jour du voyage :";	// vous demande le nombre de jours du voyage
	std::cin >> jours;

	std::cout << "Veuillez entrer le nombre de km :";	// vous demande le nombre total de km du voyage
	std::cin >> kilomètres;

	if (kilomètres <= 0 || jours <= 0)
	{
		std::cout << " ERREUR ";
	}



	else
	{
		if (kilomètres >= jours * 250)	//Si la personne fait plus de 250km par jours, alors le programme va ajouter 0.05$ à chaque km en plus
		{
			std::cout << " Le montant du voyage est de :" << (jours * 45) + ((kilomètres - 250 * jours) * 0.05) + ((kilomètres / 100 * 7.6) * 1.25) << "$";
		}
		else
		{
			std::cout << " Le coût du voyage est de :" << (jours * 45) + ((kilomètres / 100 * 7.6) * 1.25) << "$"; // dans ce calcul, les kilomètres suplémentaires ne sont pas inclu n'a 
																												   // pas dépasser la limite maximal de kilomètres par jours
		}


	}

}
/*
nombre de jours		nombre de kilomètre			Résultats
10					3000						760$
6					1200						384$
0					0							ERREUR

*/