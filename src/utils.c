/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:55:44 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/01 20:23:08 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
t_list	*init_stack(int argc, char **argv)
{
	int	i;
	t_list	*head;
	t_list	*new_node;

	i = 1;
	head = ft_lstnew(argv[0]);
	if (argc == 0)
		return (0);
	while (argv[i])
	{
		if (i == 1)
		{
			head = ft_lstnew(argv[i]);
			//if (head == NULL)
				//free
		}
		else
		{
			new_node = ft_lstnew(argv[i]);
			//if (new_node == NULL)
				//free
			ft_lstadd_back(&head, new_node);
		}
		i++;
	}
	return (head);
}

void    print_stack(t_list *head)
{
    t_list *current;

    current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
}
