/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   panda_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <ssottori@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 02:16:08 by ssottori          #+#    #+#             */
/*   Updated: 2024/11/06 03:20:34 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philos.h"

void	ft_eating_msg(t_philo *panda)
{
	const char	*flavors[] = {"chocolate", "glazed", "sprinkled", "jelly", "honey"};
	const char	*flavor = flavors[panda->id % 5];
	printf("Panda %d is eating a %s donut.\n", panda->id, flavor);
}

/*const char *thinking_messages[] = {
	"is contemplating life...",
	"is regretting life choices...",
	"is having intrusive thoughts about donuts...",
	"is questioning the meaning of donuts...",
	"is wondering if donuts are worth it..."
};

const char *get_random_thinking_message()
{
	int index = rand() % (sizeof(thinking_messages) / sizeof(thinking_messages[0]));
	return thinking_messages[index];
}

void print_fun_message(t_philo *panda, const char *action)
{
	#ifdef USE_FUN_MESSAGES
		if (strcmp(action, "thinking") == 0)
		{
			printf("Panda %d, the %s, %s\n", panda->id, panda->personality, get_random_thinking_message());
		}
		else if (strcmp(action, "eating") == 0)
		{
			printf("Panda %d, the %s, is munching on a %s donut. Aura unmatched!\n",
				   panda->id, panda->personality, panda->flavor);
		}
		else if (strcmp(action, "sleeping") == 0)
		{
			printf("Panda %d, with a zen aura, is about to crash out after a donut feast.\n", panda->id);
		}
	#else
		// Basic messages if fun messages are turned off
		if (strcmp(action, "thinking") == 0)
			printf("Panda %d is thinking...\n", panda->id);
		else if (strcmp(action, "eating") == 0)
			printf("Panda %d is eating...\n", panda->id);
		else if (strcmp(action, "sleeping") == 0)
			printf("Panda %d is sleeping...\n", panda->id);
	#endif
}*/
