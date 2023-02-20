/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:09:58 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/16 17:42:27 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // delete

int	tmp_len_stack(t_list **stack_a)
{
	t_list	*tmp;
	int		a;

	if (*stack_a == NULL)
		return (0);
	a = 0;
	tmp = *stack_a;
	while (tmp)
	{
		a++;
		tmp = tmp->next;
	}
	return (a);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	bits;

	if (argc == 1)
		return (0);
	stack_a = init_stack(argc, argv);
	stack_b = NULL;
	bits = get_bits(tmp_len_stack(&stack_a) - 1); // pour choper le plus grand chiffre
	printf("len_stack ?= %d\n", tmp_len_stack(&stack_a));
	printf("Bits = %d\n", bits);
	return (0);
}
