/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:46:24 by ssottori          #+#    #+#             */
/*   Updated: 2024/10/23 10:37:57 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philos.h"

//./philo <num_of_philos> <time_to_ded> <time_to_eat> <time_to_sleep> [num times each philo must eat]
//./philo 5 800 200 200

int	ft_parser(t_data *data, int ac, char **av)
{
	if (ac < 5 || ac > 6)
		return (0);

	data->nop = ft_atoi(av[1]);
	data->rip_time = ft_atoi(av[2]);
	data->muncies_time = ft_atoi(av[3]);
	data->nap_time = ft_atoi(av[4]);
	if (ac == 6)
		data->must_eat_times = ft_atoi(av[5]);
	else
		data->must_eat_times = -1;
	if (data->nop <= 0 || data->rip_time <= 0 || data->muncies_time <= 0 || data->nap_time <= 0 || (ac == 6 && data->must_eat_times <= 0))
		return 0;
	return (1);
}
//needs to parse args
// to init the data struct accordingly
//check that number of args is correct
//check that all args are valid ints

int	ft_atoi(const char *str)
{
	int	s;
	int	r;

	s = 1;
	r = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		s++;
	if (*str == '-')
		s = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		r = r * 10 + *str++ - '0';
	return (r * s);
}

