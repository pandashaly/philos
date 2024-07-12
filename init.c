/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:33:16 by ssottori          #+#    #+#             */
/*   Updated: 2024/07/12 03:54:01 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philos.h"

/*
init philos
	init data
	init mutexes
	init threads
*/


void	ft_init_philos(t_data *data)
{
	ft_init_data(&data);
	ft_init_mutexes(&data);
	ft_init_threads(&data);

}

void	ft_init_data(t_data *data)
{
	//call data_malloc
	//init each philos data
	//init print mutex and sets start time
}

void	ft_init_mutexes(t_data *data)
{
	int	i = 0;


}

void	ft_init_threads(t_data *data)
{
	int i = 0;


}

void	ft_data_malloc(t_data & data)
{
		//allocate memory for forks/philos/threads

}