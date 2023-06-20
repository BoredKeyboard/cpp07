/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 13:33:12 by mforstho      #+#    #+#                 */
/*   Updated: 2023/06/20 15:19:55 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void func(T &arg) {
	std::cout << arg << std::endl;
}

template <typename T>
void iter(T *array, int len, void (*func)(T &arg)) {
	for (int i = 0; i < len; i++) {
		func(array[i]);
	}
}

#endif
