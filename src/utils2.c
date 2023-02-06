/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:36:21 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/06 17:41:06 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_stack(t_list **stack)
{
	int i;
	t_list	*node;

	if (!stack)
		return (0);
	i = 0;
	node = *stack;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}

t_list	*find_max(t_list **stack) //ne fonctionne pas vraiment
{
	t_list	*max;
	t_list	*node;

	if (!stack)
		return (0);
	node = *stack;
	max = *stack;
	while (node != NULL)
	{
		if (node->content > max->content)
			max = node;
		node = node->next;
	}
	return (max);
}
