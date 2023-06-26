/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/26 14:12:12 by mforstho      #+#    #+#                 */
/*   Updated: 2023/06/26 16:22:09 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array(void) {
	this->_array = new T[0];
	this->_size = 0;
}

template<class T>
Array<T>::Array(unsigned int n) {
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++) {
		this->_array[i] = 0;
	}
	this->_size = n;
}

template<class T>
Array<T>::Array(Array const & src) {
	this->_array = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++) {
		this->_array[i] = src._array[i];
	}
	this->_size = src._size;
}

template<class T>
Array<T>::~Array(void) {
	delete[] this->_array;
	std::cout << "Destructor called" << std::endl;
}

template<class T>
unsigned int Array<T>::size(Array const & src) {
	return (this->_size);
}

template<class T>
Array<T> & Array<T>::operator=(Array const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}
