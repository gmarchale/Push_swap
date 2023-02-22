/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:36:21 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/22 17:56:33 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_len_stack(t_list **stack)
{
	int		i;
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

t_list	*find_min(t_list **stack)
{
	t_list	*tmp;
	t_list	*min_addr;

	tmp = *stack;
	min_addr = tmp;
	while (tmp != NULL)
	{
		if (min_addr->content > tmp->content)
			min_addr = tmp;
		tmp = tmp->next;
	}
	return (min_addr);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
