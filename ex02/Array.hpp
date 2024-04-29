/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:07:49 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/29 14:57:36 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array<T>(void)  :_size(0), _elements(0) {};
		Array<T>(unsigned int);
		Array<T>(const Array<T> &);
		~Array<T>(void);
		T			&operator[](unsigned int) const;
		Array<T>	&operator=(const Array<T> &other);
		unsigned int	size(void) const;
	private:
		unsigned int	_size;
		T				*_elements;
};

# include "Array.tpp"

#endif