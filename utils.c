/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:56:28 by mbueno            #+#    #+#             */
/*   Updated: 2023/05/29 22:14:38 by mbueno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int ft_isdigit_philo(char *s)
{
	int i;

	i = 0;
	if (s[i] == '-')
	{
		printf("Error: only positive number\n");
		return (1);
	}
	while ((s[i] >= '0' && s[i] <= '9') || s[i] == '+')
		i++;
	if (s[i] == '\0')
		return (0);
	printf("Error: only int\n");
	return (1);
}
