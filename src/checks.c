/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:22:05 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/28 18:49:37 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicates(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (argv[i] == argv[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_valid_number(int argc, char **argv)
{
	int	i;

	i = 0;
}


int	check_input(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		error();
	if (check_duplicates(argc, argv) == 1)
		error();
	i = 1;
	while (argv[i])
	{

	}
}
