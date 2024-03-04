/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:23:23 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/04 18:32:23 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include "iter.hpp"
#include <string>

template <typename T1>
void	printer(T1 const &value)
{
	std::cout << value << "  |  ";
}

int	main(void)
{
	std::cout << CLRALL;

	int			intArray[] = {1, 2, 3, 4};
	double		dblArray[] = {4.4, 3.3, 2.2, 1.1};
	bool		bolArray[] = {true, false};
	char		chrArray[] = {'a', 'b', 'c', 'd', 'e'};
	std::string	strArray[] = {"string1", "string2", "string3"};

	std::cout << GRY1 "  ITER WITH INT ARRAY" << std::endl;
	std::cout << "****************************************" CYAN << std::endl << "|  ";
	iter(intArray, 4, printer);
	std::cout << RST << std::endl << std::endl;

	std::cout << GRY1 "  ITER WITH DOUBLE ARRAY" << std::endl;
	std::cout << "****************************************" LIME << std::endl << "|  ";
	iter(dblArray, 4, printer);
	std::cout << RST << std::endl << std::endl;

	std::cout << GRY1 "  ITER WITH BOOL ARRAY" << std::endl;
	std::cout << "****************************************" GOLD << std::endl << "|  ";
	iter(bolArray, 2, printer);
	std::cout << RST << std::endl << std::endl;

	std::cout << GRY1 "  ITER WITH CHAR ARRAY" << std::endl;
	std::cout << "****************************************" RED1 << std::endl << "|  ";
	iter(chrArray, 5, printer);
	std::cout << RST << std::endl << std::endl;

	std::cout << GRY1 "  ITER WITH STRING ARRAY" << std::endl;
	std::cout << "****************************************" PURP << std::endl << "|  ";
	iter(strArray, 3, printer);
	std::cout << RST << std::endl << std::endl;

	return (0);
}
