/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:40:48 by mbueno            #+#    #+#             */
/*   Updated: 2023/05/29 21:01:31 by mbueno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
#define PHILO_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>

typedef struct	s_data
{
	int	num_philos;
	int	die_time;
	int	eat_time;
	int	sleep_time;

}	t_data;

typedef struct s_philo
{

}	t_philo;

//	---- main.c ----
int check_argv(int ac, char **av);

int ft_isdigit_philo(char *s);

#endif
