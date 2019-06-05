/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:08:34 by mxaba             #+#    #+#             */
/*   Updated: 2019/06/04 09:29:02 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int arc, char *arg[])
{
	int		i;
	int		j;

	i = 1;
	if (arc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		while ( i < arc) {
			j = 0;
			while (arg[i][j]) {
				arg[i][j] = toupper(arg[i][j]);
				j++;
			}
			std::cout << arg[i];
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}
