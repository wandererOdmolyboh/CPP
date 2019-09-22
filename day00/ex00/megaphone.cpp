/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:02:21 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/29 11:27:50 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 1;

	if (argc < 2)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				std :: cout << (char)(toupper(argv[j][i]));
				i++;
			}
			j++;
		}
			std :: cout <<std :: endl;
	}
	return (0);
}