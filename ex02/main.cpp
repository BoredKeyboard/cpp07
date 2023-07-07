/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 13:41:31 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/07 15:35:52 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main( void ) {
	// Array<int> a;
	Array<int> a(1);

	a[0] = 2;

	// const Array<int> b(a);
	Array<int> b(a);				// Copy constructor
	b[0] = 3;
	std::cout << a[0] << std::endl;
	std::cout << b[0] << std::endl;
	a[0] = 4;
	std::cout << a[0] << std::endl;
	std::cout << b[0] << std::endl;
	std::cout << std::endl;

	Array<int> c;
	c = a;							// copy assignment operator
	std::cout << a[0] << std::endl;
	std::cout << c[0] << std::endl;
	c[0] = 3;
	std::cout << a[0] << std::endl;
	std::cout << c[0] << std::endl;
	a[0] = 1;
	std::cout << a[0] << std::endl;
	std::cout << c[0] << std::endl;
	std::cout << std::endl;

	Array<int> d(5);
	std::cout << "size a: " << a.size() << std::endl;
	std::cout << "size d: " << d.size() << std::endl;
	std::cout << std::endl;
	try {									// index out of bounds
		std::cout << c[3] << std::endl;
	}
	catch (std::exception &a) {
		std::cout << a.what() << std::endl;
	}
	try {
		std::cout << c[-1] << std::endl;
	}
	catch (std::exception &a) {
		std::cout << a.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}
