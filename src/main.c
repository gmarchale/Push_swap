/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:09:58 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/06 20:34:29 by gmarchal         ###   ########.fr       */
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

#include <stdio.h> // delete
int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	*array;
	int	i;

	if (argc == 1)
		return (0);
	stack_a = init_stack(argc, argv);
	stack_b = NULL;
	print_stack(stack_a);
	ft_printf("Len de la stack: %d\n", len_stack(&stack_a));
	array = init_array(len_stack(&stack_a), &stack_a);
	i = 0;
	printf("%d\n", array[0]);
	/*
	while(array)
	{
		ft_printf("%d, ", array[i]);
		i++;
	}
	*/
	return (0);
}
