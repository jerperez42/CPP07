/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:07:49 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/24 17:38:51 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include "iter.h"

template <typename T, typename L> void iter(T arr[], L len, void (*fun)(T*))
{
	const size_t size = static_cast<size_t>(len);

	for (size_t i = 0; i < size; i++)
		fun(arr + i);
}

#endif