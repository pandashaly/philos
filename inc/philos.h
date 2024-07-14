/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philos.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:16:12 by ssottori          #+#    #+#             */
/*   Updated: 2024/07/14 02:00:37 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOS_H
# define PHILOS_H


# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <pthread.h>
# include <sys/time.h>
# include <unistd.h>

/*      STRUCTS      */

typedef struct s_philo
{
	int 	id;
	int 	L_chopstick;
	int 	R_chopstick;
	int 	donuts_eaten;
	long 	last_supper;
	t_data	*data;
}	t_philo;

typedef struct s_data
{
	int				nop;
	int				rip_time;
	int				muncies_time;
	int				nap_time;
	int				must_eat_times;
	long			start_time;
	pthread_mutex_t	*forks;
	pthread_mutex_t	lock;
	t_philo			*philos;
	pthread_t		*threads;
}	t_data;

/*       FUNCTIONS      */



#endif