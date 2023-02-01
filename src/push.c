/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:14:31 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/01 19:36:38 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_node_a;
	t_list	*first_node_b;

	if (*stack_b == NULL)
		return ;
	ft_printf("pa\n");
	first_node_a = *stack_a;
	first_node_b = *stack_b;
	*stack_a = first_node_b;
	*stack_b = (*stack_b)->next;
	(*stack_a)->next = first_node_a;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_node_a;
	t_list	*first_node_b;

	if (*stack_a == NULL)
		return ;
	ft_printf("pb\n");
	first_node_a = *stack_a;
	first_node_b = *stack_b;
	*stack_b = first_node_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = first_node_b;
}
