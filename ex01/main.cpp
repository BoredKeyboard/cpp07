/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 13:41:31 by mforstho      #+#    #+#                 */
/*   Updated: 2023/06/20 15:23:47 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main( void ) {
	int array[5];
	array[0] = 2345;
	array[1] = 0;
	array[2] = 259;
	array[3] = 89;
	array[4] = 45;
	iter(array, 5, &func);
	std::cout << std::endl;
	std::string array2[5];
	array2[0] = "hello";
	array2[1] = "world";
	array2[2] = "how";
	array2[3] = "are";
	array2[4] = "you";
	iter(array2, 5, &func);
	return (EXIT_SUCCESS);
}
