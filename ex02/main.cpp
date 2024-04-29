/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:08:11 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/29 15:17:59 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout << std::endl << "--------default--------" << std::endl;

		Array<std::string>	ss;
		Array<int>			ii;
	}
	{
		std::cout << std::endl << "--------unsigned int--------" << std::endl;
		unsigned int	n;

		n = 5;
		Array<std::string>	ss(n);
		std::cout << "Array.size()=" << ss.size() << " n=" << n << std::endl;
		n = 3;
		Array<int>			ii(n);
		std::cout << "Array.size()=" << ii.size() << " n=" << n << std::endl;
		n = 0;
		Array<float>		ff(n);
		std::cout << "Array.size()=" << ff.size() << " n=" << n << std::endl;
	}
	{
		std::cout << std::endl << "--------operator[] --------" << std::endl;
		Array<unsigned int>	uiui(2);
		try
		{
			for (unsigned int i = 0; i < 10; i++)
			{
				std::cout << i << ": ";
				uiui[i] = i;
				std::cout << "(uiui[i]==i) ? " << ((uiui[i] == i) ? "yes" : "no") << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "--------copy operator= --------" << std::endl;
		Array<std::string>	ss(2);
		Array<std::string>	copy;

		ss[0] = std::string("orginal origin");
		ss[1] = std::string("orginal something");
		copy = ss;
		std::cout << "size original=" << ss.size() << " size copy=" << copy.size() << std::endl;
		std::cout << std::endl;
		for (unsigned int i = 0; i < 2; i++)
			std::cout << "original='" << ss[i] << "' copy=" << copy[i] << std::endl;
		std::cout << std::endl;
		ss[0] = std::string("modified origin");
		ss[1] = std::string("modified something");
		for (unsigned int i = 0; i < 2; i++)
			std::cout << "original='" << ss[i] << "' copy=" << copy[i] << std::endl;
	}
	return (0);
}