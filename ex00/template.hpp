/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   template.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/06 14:05:56 by mforstho      #+#    #+#                 */
/*   Updated: 2023/06/20 13:31:30 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T>
void swap(T &a, T &b) {
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b) {
	if (a == b) {
		return (b);
	}
	else if (a < b) {
		return (a);
	}
	else {
		return (b);
	}
}

template <typename T>
T max(T a, T b) {
	if (a == b) {
		return (b);
	}
	else if (a > b) {
		return (a);
	}
	else {
		return (b);
	}
}

#endif
