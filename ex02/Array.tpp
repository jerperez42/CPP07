/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:07:49 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/29 15:17:25 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

template <typename T>
Array<T>::Array(unsigned int n)
{
	if (0 == n)
		this->_elements = 0;
	else
		this->_elements = new T[n];
	if (0 == this->_elements)
		this->_size = 0;
	else
		this->_size = n;
}

template <typename T>
Array<T>::Array(const Array<T> &other)
{
	*this = other;
}

template <typename T>
Array<T>::~Array(void)
{
	if (0 != this->_size)
		delete[] this->_elements;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &other)
{
	if (this != &other)
	{
		const unsigned int	n = other.size();

		if (this->_elements)
			delete[] this->_elements;
		if (0 == n)
			this->_elements = 0;
		else
			this->_elements = new T[n];
		if (0 == this->_elements)
		{
			this->_size = 0;
			return (*this);
		}
		this->_size = other.size();
		for (unsigned int i = 0; i < n; i++)
			(*this)[i] = other[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw std::exception();
	return (this->_elements[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}
