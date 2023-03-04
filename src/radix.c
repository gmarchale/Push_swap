/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:10:21 by gmarchal          #+#    #+#             */
/*   Updated: 2023/03/04 17:46:01 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bits(int max)
{
	int	nb_digits;

	nb_digits = 0;
	while (max != 0)
	{
		max = max >> 1;
		nb_digits++;
	}
	return (nb_digits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		bits;
	int		i[2];
	int		num;
	int		stack_size;

	stack_size = ft_len_stack(stack_a);
	normalize_stack(stack_a);
	bits = get_bits(ft_len_stack(stack_a) - 1);
	i[0] = -1;
	while (++i[0] < bits)
	{
		i[1] = -1;
		while (++i[1] < stack_size)
		{
			tmp = *stack_a;
			num = tmp->content;
			if (((num >> i[0]) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (*stack_b)
			pa(stack_a, stack_b);
	}
}

void	min_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*min_addr;
	t_list	*tmp;
	int		rotate_up;

	while (is_sorted(stack_a) == 0)
	{
		min_addr = find_min(stack_a);
		rotate_up = rotate_dir(stack_a, min_addr);
		tmp = *stack_a;
		while (tmp != min_addr && tmp)
		{
			if (rotate_up == 1)
				ra(stack_a);
			else
				rra(stack_a);
			tmp = *stack_a;
		}
		if (is_sorted(stack_a) == 1)
			break ;
		if (tmp == min_addr)
			pb(stack_a, stack_b);
	}
	while (*stack_b != NULL)
		pa(stack_a, stack_b);
}

void	tri_sort(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first > second && second > third)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (first > second && second < third && first > third)
		ra(stack_a);
	else if (first < second && second > third && first > third)
		rra(stack_a);
	else if (first < second && second > third && first < third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first > second && second < third && first < third)
		sa(stack_a);
}
