/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:09:58 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/13 18:29:42 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // delete

void	mod_stack(t_list **stack, int *array_mod_values);

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
	int q = 0;

	i = 0;
	cp_array = init_array(len_stack, stack);
	while(array[q])
	{
		printf("%d\n", cp_array[q]);
		printf("q = %d\n", q);
		q++;
	}
	printf("-------------------------");
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

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	*array;

	if (argc == 1)
		return (0);
	stack_a = init_stack(argc, argv);
	stack_b = NULL;
	array = init_array(len_stack(&stack_a), &stack_a);
	mod_values(array, len_stack(&stack_a), &stack_a); 
	return (0);
}
