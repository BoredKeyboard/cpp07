/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 16:22:37 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/06 16:55:25 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array {
	private:
		T			*_array;
		unsigned int _size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const & src);
		virtual ~Array<T>(void);
		Array<T> & operator=(Array<T> const & src);
		T & operator[](unsigned int index);
		T const & operator[](unsigned int index) const;
		unsigned int size(void);
};

// template<class T>
// std::ostream &operator<<(std::ostream &os, Array<T> &src);

#include "Array.tpp"

#endif
