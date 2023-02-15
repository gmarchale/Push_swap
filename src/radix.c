/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:10:21 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/15 15:01:15 by gmarchal         ###   ########.fr       */
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

/*
void	radix_sort(t_list **stack_a, t_list **stack_b)
{
}
*/
