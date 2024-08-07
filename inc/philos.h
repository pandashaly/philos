/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philos.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:16:12 by ssottori          #+#    #+#             */
/*   Updated: 2024/07/21 15:43:45 by ssottori         ###   ########.fr       */
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
	int				id;
	int				l_chopstick;
	int				r_chopstick;
	int				donuts_eaten;
	long			last_supper;
	struct s_data	*data;
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

/* PARSER */
int		ft_atoi(const char *s);
int		ft_parser(t_data *data, int ac, char **av);


/* INIT */
void	ft_init_philos(t_data *data);
void	ft_init_data(t_data *data);
void	ft_init_mutexes(t_data *data);
void	ft_init_threads(t_data *data);
void	ft_data_malloc(t_data *data);

/* UTILS */

long	ft_get_time(void);
void    ft_routine(void *arg);
void	ft_sleep(long long time);



#endif