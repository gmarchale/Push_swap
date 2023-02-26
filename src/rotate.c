/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:58:00 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/26 17:49:38 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack);

void	ra(t_list **stack)
{
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	ft_printf("ra\n");
	rotate(stack);
}

void	rb(t_list **stack)
{
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	ft_printf("rb\n");
	rotate(stack);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	ft_printf("rr\n");
	rotate(stack_a);
	rotate(stack_b);
}

void	rotate(t_list **stack)
{
	t_list	*first_node;

	first_node = *stack;
	*stack = (*stack)->next;
	first_node->next = NULL;
	ft_lstadd_back(stack, first_node);
}
