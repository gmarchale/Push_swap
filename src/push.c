/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:14:31 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/26 17:47:46 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_node_b;

	if (*stack_b == NULL)
		return ;
	ft_printf("pa\n");
	first_node_b = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, first_node_b);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_node_a;

	if (*stack_a == NULL)
		return ;
	ft_printf("pb\n");
	first_node_a = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, first_node_a);
}
