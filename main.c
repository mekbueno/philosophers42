/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:40:22 by mbueno            #+#    #+#             */
/*   Updated: 2023/05/29 22:16:31 by mbueno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int check_argv(int ac, char **av)
{
	int i;

	i = 1;
	if (ac != 5 && ac != 6)
	{
		printf("ERROR - check number of arguments!\n");
		return (1);
	}
	while (i < ac)
	{
		if (ft_isdigit_philo(av[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (check_argv(ac, av) == 1)
		exit(1);
}
