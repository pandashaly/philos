/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:31:07 by ssottori          #+#    #+#             */
/*   Updated: 2024/11/06 02:29:05 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philos.h"

/*destroy mutexes and frees alloc mem when program ends*/
void	ft_clear_table(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->nop)
	{
		pthread_mutex_destroy(&data->bamboo[i]);
		i++;
	}
	pthread_mutex_destroy(&data->lock);
	free(data->bamboo);
	free(data->pandas);
	free(data->threads);
}

/*join threads for easier cleanup and avoid zombie threads*/
void	ft_join_threads(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->nop)
	{
		pthread_join(data->threads[i], NULL);
		i++;
	}
}
