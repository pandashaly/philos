/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:33:16 by ssottori          #+#    #+#             */
/*   Updated: 2024/11/06 00:38:17 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philos.h"

void	ft_init_philos(t_data *data)
{
	ft_init_data(data);
	ft_init_mutexes(data);
	ft_init_threads(data);
}

/* sets up each philos data (ID, each chopstick iD and inits a mutex lock as well as sim start time)*/

void	ft_init_data(t_data *data)
{
	int	i;

	i = 0;
	ft_data_malloc(data);
	while (i < data->nop)
	{
		data->philos[i].id = i;
		data->philos[i].l_chopstick = i;
		data->philos[i].r_chopstick = (i + 1) % data->nop;
		data->philos[i].donuts_eaten = 0;
		data->philos[i].last_supper = 0;
		data->philos[i].data = data;
		i++;
	}
	pthread_mutex_init(&data->lock, NULL);
	data->start_time = ft_get_time();
}

/*init mutex for each fork*/
void	ft_init_mutexes(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->nop)
	{
		if (pthread_mutex_init(&data->forks[i], NULL) != 0)
		{
			perror("Failed to init form mutex");
			exit(EXIT_FAILURE);
		}
		i++;
	}
	if (pthread_mutex_init(&data->lock, NULL) != 0)
	{
		perror("Failed to init lock mutex");
		exit(EXIT_FAILURE);
	}
}

/*makes thread for each philo passing ft_routine for each philo to follow*/

void	ft_init_threads(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->nop)
	{
		pthread_create(&data->threads[i], NULL, ft_routine, &data->philos[i]);
		i++;
	}
}

void	ft_data_malloc(t_data *data)
{
	data->forks = (pthread_mutex_t *)malloc(data->nop * sizeof(pthread_mutex_t));
	if (data->forks == NULL)
	{
		perror("Failed to malloc forks");
		exit(EXIT_FAILURE);
	}
	data->philos = (t_philo *)malloc(data->nop * sizeof(t_philo));
	if (data->philos == NULL)
	{
		perror("Failed to malloc philos");
		exit(EXIT_FAILURE);
	}
	data->threads = (pthread_t *)malloc(data->nop * sizeof(pthread_t));
	if (data->threads == NULL)
	{
		perror("Failed to malloc threads");
		exit(EXIT_FAILURE);
	}
}
