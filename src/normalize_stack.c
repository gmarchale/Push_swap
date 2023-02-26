/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:44:41 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/26 16:14:36 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*init_array(int len_stack, t_list **stack);
static void	mod_values(int *array, int len_stack, t_list **stack);
static void	mod_stack(t_list **stack, int *array_mod_values);

void	normalize_stack(t_list **stack)
{
	int	*array;
	int	len_stack;

	len_stack = ft_len_stack(stack);
	array = init_array(len_stack, stack);
	mod_values(array, len_stack, stack);
}

int	*init_array(int len_stack, t_list **stack)
{
	int		n;
	int		*array;
	t_list	*tmp;

	array = malloc(sizeof(int) * len_stack);
	if (!array)
		exit(EXIT_FAILURE);
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

int	len_array(int *array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

void	mod_values(int *array, int len_stack, t_list **stack)
{
	int	i;
	int	j;
	int	count;
	int	*cp_array;

	i = 0;
	cp_array = init_array(len_stack, stack);
	while (i < len_stack)
	{
		j = 0;
		count = 0;
		while (j < len_stack)
		{
			if (cp_array[j] < cp_array[i])
				count++;
			j++;
		}
		array[i] = count;
		i++;
	}
	free (cp_array);
	mod_stack(stack, array);
}

void	mod_stack(t_list **stack, int *array_mod_values)
{
	t_list	*tmp;
	int		a;

	a = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp->content = array_mod_values[a];
		a++;
		tmp = tmp->next;
	}
}
