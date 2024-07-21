/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:32:50 by ssottori          #+#    #+#             */
/*   Updated: 2024/07/21 16:01:05 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philos.h"

void    *ft_routine(void *arg)
{
    //t_philo *philosopher = (t_philo *)arg;
    (void)arg;
    printf("hello, it's me\n");
}

/*
Each philo can be in one of three, thinking, hungry, or eating
routine function 
*/