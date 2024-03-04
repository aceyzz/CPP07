/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:29:26 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/04 17:49:47 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "colors.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int	main(void)
{
	std::cout << CLRALL;

	std::cout << BLUE "## WITH INTEGER ##" RST << std::endl;
	int	int_a = 42;
	int	int_b = 69;
	std::cout << GRY1 "a  : " CYAN << int_a << RST << std::endl;
	std::cout << GRY1 "b  : " CYAN << int_b << RST << std::endl;
	swap(int_a, int_b);
	std::cout << GRY1 "// after swap()" CYAN << RST << std::endl;
	std::cout << GRY1 "a  : " CYAN << int_a << RST << std::endl;
	std::cout << GRY1 "b  : " CYAN << int_b << RST << std::endl;
	std::cout << GRY1 "min: " CYAN << min(int_a, int_b) << RST << std::endl;
	std::cout << GRY1 "max: " CYAN << max(int_a, int_b) << RST << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "## WITH FLOATS ##" RST << std::endl;
	float	fl_a = 42.24f;
	float	fl_b = 69.96f;
	std::cout << GRY1 "a  : " GOLD << fl_a << RST << std::endl;
	std::cout << GRY1 "b  : " GOLD << fl_b << RST << std::endl;
	swap(fl_a, fl_b);
	std::cout << GRY1 "// after swap()" GOLD << RST << std::endl;
	std::cout << GRY1 "a  : " GOLD << fl_a << RST << std::endl;
	std::cout << GRY1 "b  : " GOLD << fl_b << RST << std::endl;
	std::cout << GRY1 "min: " GOLD << min(fl_a, fl_b) << RST << std::endl;
	std::cout << GRY1 "max: " GOLD << max(fl_a, fl_b) << RST << std::endl;


	std::cout << std::endl;
	std::cout << BLUE "## WITH DOUBLES ##" RST << std::endl;
	double	db_a = 42.42;
	double	db_b = 69.69;
	std::cout << GRY1 "a  : " SALM << db_a << RST << std::endl;
	std::cout << GRY1 "b  : " SALM << db_b << RST << std::endl;
	swap(db_a, db_b);
	std::cout << GRY1 "// after swap()" SALM << RST << std::endl;
	std::cout << GRY1 "a  : " SALM << db_a << RST << std::endl;
	std::cout << GRY1 "b  : " SALM << db_b << RST << std::endl;
	std::cout << GRY1 "min: " SALM << min(db_a, db_b) << RST << std::endl;
	std::cout << GRY1 "max: " SALM << max(db_a, db_b) << RST << std::endl;


	std::cout << std::endl;
	std::cout << BLUE "## WITH CHARS ##" RST << std::endl;
	char	c_a = 'A';
	char	c_b = 'Z';
	std::cout << GRY1 "a  : " REDD << c_a << RST << std::endl;
	std::cout << GRY1 "b  : " REDD << c_b << RST << std::endl;
	swap(c_a, c_b);
	std::cout << GRY1 "// after swap()" REDD << RST << std::endl;
	std::cout << GRY1 "a  : " REDD << c_a << RST << std::endl;
	std::cout << GRY1 "b  : " REDD << c_b << RST << std::endl;
	std::cout << GRY1 "min: " REDD << min(c_a, c_b) << RST << std::endl;
	std::cout << GRY1 "max: " REDD << max(c_a, c_b) << RST << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "## WITH STRINGS ##" RST << std::endl;
	std::string	stra = "Hello World 2";
	std::string	strb = "Hello World 1";
	std::cout << GRY1 "a  : " PURP << stra << RST << std::endl;
	std::cout << GRY1 "b  : " PURP << strb << RST << std::endl;
	swap(stra, strb);
	std::cout << GRY1 "// after swap()" PURP << RST << std::endl;
	std::cout << GRY1 "a  : " PURP << stra << RST << std::endl;
	std::cout << GRY1 "b  : " PURP << strb << RST << std::endl;
	std::cout << GRY1 "min: " PURP << min(stra, strb) << RST << std::endl;
	std::cout << GRY1 "max: " PURP << max(stra, strb) << RST << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "## WITH BOOLS ##" RST << std::endl;
	bool	ba = true;
	bool	bb = false;
	std::cout << GRY1 "a  : " LIME << ba << RST << std::endl;
	std::cout << GRY1 "b  : " LIME << bb << RST << std::endl;
	swap(ba, bb);
	std::cout << GRY1 "// after swap()" LIME << RST << std::endl;
	std::cout << GRY1 "a  : " LIME << ba << RST << std::endl;
	std::cout << GRY1 "b  : " LIME << bb << RST << std::endl;
	std::cout << GRY1 "min: " LIME << min(ba, bb) << RST << std::endl;
	std::cout << GRY1 "max: " LIME << max(ba, bb) << RST << std::endl;

	// UNCOMMENT THESES LINES TO CHECK IF 2 DIFFERENT TYPES CAN COMPILE
	// swap(42, 'c');
	// min("Hello", true);
	// max(42.42, 69.0f);

	return (0);
}
