/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:44:41 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/07 13:47:06 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*init_array(int len_stack, t_list **stack)
{
	int		n;
	int		*array;
	t_list	*tmp;

	array = malloc(sizeof(int) * len_stack);
	if (!array)
		return (0); // ou exit pour protection ?
	n = 0;
	tmp = *stack;
	while (n < len_stack)
	{
		array[n] = tmp->content;
		n++;
		tmp = tmp->next;
	}
	return (array);
}
