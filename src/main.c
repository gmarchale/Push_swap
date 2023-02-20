/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:09:58 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/20 20:25:52 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // delete

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		is_string;

	if (argc == 1)
		return (0);
	is_string = 0;
	if (argc == 2)
		is_string = 1;
	//argv = check_input(&argc, argv);
	stack_a = init_stack(argc, argv);
	stack_b = NULL;
	/*
	if (argc < 12)
		printf("%s\n", "salut");
		//min_sort(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	*/
	radix_sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	return (0);
}
