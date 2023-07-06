/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 13:41:31 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/06 16:56:28 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main( void ) {
	// Array<int> a;
	Array<int> a(1);

	a[0] = 2;

	Array<int> b(a);
	// const Array<int> b(a);
	b[0] = 3;
	std::cout << a[0] << std::endl;
	std::cout << b[0] << std::endl;
	a[0] = 4;
	std::cout << a[0] << std::endl;
	std::cout << b[0] << std::endl;

	return (EXIT_SUCCESS);
}
