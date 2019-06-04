/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:08:34 by event             #+#    #+#             */
/*   Updated: 2019/06/04 09:29:02 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace::std;

int		main(int arc, char *arg[])
{
	int		i;
	int		j;

	i = 1;
	if (arc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		while ( i < arc) {
			j = 0;
			while (arg[i][j]) {
				arg[i][j] = toupper(arg[i][j]);
				j++;
			}
			cout << arg[i];
			i++;
		}
		cout << "\n";
	}
	return (0);
}
