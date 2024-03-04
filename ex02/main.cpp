/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:34:25 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/04 19:54:41 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 10

void	mainSubject(void);


/* -------------------------------------------------------------------------- */
	// MAIN CUSTOM
/* -------------------------------------------------------------------------- */
int main(void)
{
	std::cout << CLRALL;
	std::cout << BLUE "// MAINSUBJECT /////////////////////////" << std::endl;
	std::cout << GRY1 "Doit seulement retourner 2 exceptions:";
	std::cout << "tente d'acceder a index -1 et index MAX_VAL" RST << std::endl;
	mainSubject();
	std::cout << std::endl;

	std::cout << BLUE "// CUSTOM MAIN /////////////////////////" RST << std::endl;
	std::cout << GRY1 "Création d'un Array vide de type int" RST << std::endl;
    Array<int> arrayVide;
    std::cout << CYAN "Taille de l'Array vide: " << arrayVide.size() << RST << std::endl;

    std::cout << GRY1 "\nCréation d'un Array avec MAX_VAL éléments initialisés par défaut" RST << std::endl;
    Array<int> arrayDefaut(MAX_VAL);
    std::cout << LIME "Taille de l'Array initialisé par défaut: " << arrayDefaut.size() << RST << std::endl;

    std::cout << GRY1 "\nRemplissage de l'Array (valeurs random)" RST << std::endl;
    for (int i = 0; i < MAX_VAL; ++i)
	{
        arrayDefaut[i] = i * 42;
        std::cout << GOLD << arrayDefaut[i] << " | ";
    }
    std::cout << RST << std::endl;

    std::cout << GRY1 "\nTest du constructeur de copie" RST << std::endl;
    Array<int> copieArray(arrayDefaut);
    bool erreurCopie = false;
    for (int i = 0; i < MAX_VAL; ++i)
	{
        if (copieArray[i] != i * 42)
		{
            erreurCopie = true;
            break;
        }
    }
    std::cout << (erreurCopie ? REDD "Erreur dans la copie des valeurs" : GRNN "Copie réussie") << RST << std::endl;

    std::cout << GRY1 "\nTest de l'opérateur d'assignation" RST << std::endl;
    Array<int> assignArray = arrayDefaut;
    bool erreurAssignation = false;
    for (int i = 0; i < MAX_VAL; ++i)
	{
        if (assignArray[i] != i * 42)
		{
            erreurAssignation = true;
            break;
        }
    }
    std::cout << (erreurAssignation ? REDD "Erreur dans l'assignation des valeurs" : GRNN "Assignation réussie") << RST << std::endl;

    std::cout << GRY1 "\nTest d'accès hors limites avec gestion des exceptions" RST << std::endl;
    try
	{
        std::cout << assignArray[MAX_VAL] << std::endl;
    }
	catch (const Array<int>::OutOfBoundsException& e)
	{
        std::cout << ORNG "Exception capturée comme attendu: " << e.what() << RST << std::endl;
    }

    std::cout << GRY1 "\nTest avec des types complexes (std::string)" RST << std::endl;
    Array<std::string> arrayString(3);
    arrayString[0] = "Paris";
    arrayString[1] = "c'est";
    arrayString[2] = "magique!";
    for (unsigned int i = 0; i < arrayString.size(); i++)
        std::cout << PINK << arrayString[i] << " | " << RST;
    std::cout << std::endl << std::endl;

    return (0);
}

/* -------------------------------------------------------------------------- */
	//MAIN DU SUJET
/* -------------------------------------------------------------------------- */
void	mainSubject(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cout << "didn't save the same value!!" << std::endl;
			return ;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
}
