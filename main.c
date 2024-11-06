/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:18:29 by ssottori          #+#    #+#             */
/*   Updated: 2024/11/06 01:46:40 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philos.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (!ft_parser(&data, ac, av))
	{
		printf("Program usage: ");
		printf("./philo <number_of_philosophers> <time_to_di> <time_to_eat> ");
		printf("<time_to_sleep> [number_of_times_each_philosopher_must_eat]\n");
		return (EXIT_FAILURE);
	}
	ft_init_philos(&data); //to call init_mutex and init_thread
	//ft_routine(&data); //keep track of philo states
	//ft_clear_table(&data);
	sleep(2);
	ft_join_threads(&data);
	ft_clear_table(&data);
	return (EXIT_SUCCESS);
}
