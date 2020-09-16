// But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une
// automobile lou�e
// Auteur : Guillaume Lafrance
// Date : 2020-09-16



#include <iostream>

void main()
{

	setlocale(LC_ALL, "");
	int kilom�tres;
	int jours;
	// Initialiser les variables

	std::cout << "Veuillez entrer le nombre de jour du voyage :";	// vous demande le nombre de jours du voyage
	std::cin >> jours;

	std::cout << "Veuillez entrer le nombre de km :";	// vous demande le nombre total de km du voyage
	std::cin >> kilom�tres;

	if (kilom�tres <= 0 || jours <= 0)
	{
		std::cout << " ERREUR ";
	}



	else
	{
		if (kilom�tres >= jours * 250)	//Si la personne fait plus de 250km par jours, alors le programme va ajouter 0.05$ � chaque km en plus
		{
			std::cout << " Le montant du voyage est de :" << (jours * 45) + ((kilom�tres - 250 * jours) * 0.05) + ((kilom�tres / 100 * 7.6) * 1.25) << "$";
		}
		else
		{
			std::cout << " Le co�t du voyage est de :" << (jours * 45) + ((kilom�tres / 100 * 7.6) * 1.25) << "$"; // dans ce calcul, les kilom�tres supl�mentaires ne sont pas inclu n'a 
																												   // pas d�passer la limite maximal de kilom�tres par jours
		}


	}

}
/*
nombre de jours		nombre de kilom�tre			R�sultats
10					3000						760$
6					1200						384$
0					0							ERREUR

*/