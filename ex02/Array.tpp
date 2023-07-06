/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/26 14:12:12 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/06 16:55:21 by mforstho      ########   odam.nl         */
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
Array<T>::Array(Array<T> const & src) {
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
unsigned int Array<T>::size(void) {
	return (this->_size);
}

template<class T>
Array<T> & Array<T>::operator=(Array<T> const & src) {
	if (this == &src)
		return (*this);
	this->_array = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++) {
		this->_array[i] = src._array[i];
	}
	this->_size = src._size;
	return (*this);
}

template<class T>
T & Array<T>::operator[](unsigned int index) {
	if (index >= this->_size || index < 0) {
		throw std::out_of_range("Index out of bounds");
	}
	return (this->_array[index]);
}

template<class T>
T const & Array<T>::operator[](unsigned int index) const {
	if (index >= this->_size || index < 0) {
		throw std::out_of_range("Index out of bounds");
	}
	return (this->_array[index]);
}

// template<class T>
// std::ostream &operator<<(std::ostream &os, Array<T> &src) {
// 	os << src._array << std::endl;
// 	return (os);
// }
