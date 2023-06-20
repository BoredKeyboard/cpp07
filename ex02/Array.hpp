/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 16:22:37 by mforstho      #+#    #+#                 */
/*   Updated: 2023/06/20 16:23:50 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
class Array {
	private:

	public:
		Array(void);
		Array(Array const & src);
		virtual ~Array(void);
		Array & operator=(Array const & src);
};



#endif
