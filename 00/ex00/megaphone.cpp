/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:57:52 by guclemen          #+#    #+#             */
/*   Updated: 2025/10/31 10:40:38 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	k = 0;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		k = 0;
		while (argv[i][k])
		{
			std::cout << (char)std::toupper (argv[i][k]);
			k++;
		}
		i++;
	}
	std::cout << "\n";
	return 0;
}
