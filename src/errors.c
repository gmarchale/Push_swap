/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:35:54 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/21 10:48:36 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	free_tab_error(char **argv, int is_str)
{
	if (is_str == 1)
		free_tab(argv);
	error();
}

void	free_stack(t_list **stack, char **argv, int is_str)
{
	ft_lstclear(stack);
	free_tab_error(argv, is_str);
}
