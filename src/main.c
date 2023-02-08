/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:09:58 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/08 15:45:39 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // delete

int	len_array(int *array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	*sort_array(int *array)
{
	int	i;
	int	j;
	int	n;
	int	len;
	int	*new;

	i = 0;
	len = len_array(array);
	new = malloc(sizeof(int) * len); // a free
	while (array[i])
	{
		n = 0;
		j = 0;
		while(array[j])
		{
			if (array[j] < array[i])
				n++;
			j++;
		}
		new[n] = array[i];
		i++;
	}
	return (new);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	*array;
	int	i;
	int	*new;

	if (argc == 1)
		return (0);
	stack_a = init_stack(argc, argv);
	stack_b = NULL;
	print_stack(stack_a);
	ft_printf("Len de la stack: %d\n", len_stack(&stack_a));
	array = init_array(len_stack(&stack_a), &stack_a);
	i = 0;
	new = sort_array(array);
	while (new[i])
	{
		printf("%d\n", new[i]);
		i++;
	}
	return (0);
}
