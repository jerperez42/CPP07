/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:08:11 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/24 18:01:14 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

void	_add1(int *i)
{
	(*i) += 1;
}

void	_add1_nok(char *i)
{
	(*i) += 1;
}

template <typename T> void _toupper(T* c)
{
	if ('a' <= *c && 'z' >= *c)
		(*c) += 'A' - 'a';
}

int	main(void)
{
	{
		int	arr_i[5] = {0, 1 , 2, 3, 4};

		
		for (int i = 0; i < 5; i++)
			std::cout << "arr_i[" << i << "]=" << arr_i[i] << std::endl;
		::iter(arr_i, 5, &_add1);
		std::cout << "-----_add1-----" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "arr_i[" << i << "]=" << arr_i[i] << std::endl;
		std::cout << std::endl;
	}
	{
		char	str[6] = {'S', 'a', 'l', 'u', 't', '\0'};

		std::cout << str << std::endl;
		std::cout << "-----_toupper-----" << std::endl;
		::iter(str, 6, &_toupper<char>);
		std::cout << str << std::endl;
		std::cout << std::endl;
	}
	// incorrect fun
	// std::cout << "-----ADD 1-----" << std::endl;
	// std::cout << "-----BEFORE-----" << std::endl;
	// for (int i = 0; i < 5; i++)
	// 	std::cout << "arr_i[" << i << "]=" << arr_i[i] << std::endl;
	// ::iter(arr_i, 5, &_add1_nok);
	// std::cout << "-----AFTER-----" << std::endl;
	// for (int i = 0; i < 5; i++)
	// 	std::cout << "arr_i[" << i << "]=" << arr_i[i] << std::endl;

	// incorrect len
	// std::cout << "-----ADD 1-----" << std::endl;
	// std::cout << "-----BEFORE-----" << std::endl;
	// for (int i = 0; i < 5; i++)
	// 	std::cout << "arr_i[" << i << "]=" << arr_i[i] << std::endl;
	// ::iter(arr_i, "patate", &_add1);
	// std::cout << "-----AFTER-----" << std::endl;
	// for (int i = 0; i < 5; i++)
	// 	std::cout << "arr_i[" << i << "]=" << arr_i[i] << std::endl;
	
	return (0);
}