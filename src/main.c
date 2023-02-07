/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:09:58 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/07 13:48:04 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	//printf("%d\n", array[0]);
	while (array[i])
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}
