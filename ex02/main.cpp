/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 13:41:31 by mforstho      #+#    #+#                 */
/*   Updated: 2023/06/26 16:25:00 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main( void ) {
	Array<int> a(1);

	a[0] = 2;

	const Array<int> b(a);

	std::cout << b[0] << std::endl;

	return (EXIT_SUCCESS);
}
