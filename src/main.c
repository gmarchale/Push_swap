/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:09:58 by gmarchal          #+#    #+#             */
/*   Updated: 2023/03/02 18:27:13 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // delete

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1)
		error();
	check_input(argc, argv);
	stack_a = init_stack(argc, argv);
	stack_b = NULL;
	if (argc < 12)
		min_sort(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	//printf("delete print avant de tests\n");
	//print_stack(stack_a); //delete
	ft_lstclear(&stack_a);
	//system("leaks push_swap");
	return (0);
}
