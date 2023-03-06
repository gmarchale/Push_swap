/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:09:58 by gmarchal          #+#    #+#             */
/*   Updated: 2023/03/06 20:11:49 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1)
		return (0);
	check_input(argc, argv);
	stack_a = init_stack(argc, argv);
	stack_b = NULL;
	if (argc < 12)
	{
		if (argc == 4)
			tri_sort(&stack_a);
		else
			min_sort(&stack_a, &stack_b);
	}
	else
		radix_sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	return (0);
}
