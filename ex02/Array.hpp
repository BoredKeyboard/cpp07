/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 16:22:37 by mforstho      #+#    #+#                 */
/*   Updated: 2023/06/26 15:11:59 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
class Array {
	private:
		T			*_array;
		unsigned int _size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const & src);
		virtual ~Array(void);
		Array & operator=(Array const & src);
		unsigned int size(Array const & src);
};

#endif
