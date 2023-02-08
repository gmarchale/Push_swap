/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:44:41 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/08 11:44:07 by gmarchal         ###   ########.fr       */
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
		exit(EXIT_FAILURE); //exit ou return
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
/*
int	sort_array(int *array)
{
	int	i;
	int	n;
	int	len;
	int	*new;
	
	i = 0;
	len = ft_strlen(array);
	while (i
}
*/
