/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:55:44 by gmarchal          #+#    #+#             */
/*   Updated: 2023/03/06 20:12:04 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_stack(int argc, char **argv)
{
	t_list	*new_node;
	t_list	*head;
	int		a;

	a = 1;
	while (a < argc)
	{
		if (a == 1)
		{
			head = ft_lstnew(ft_atoi(argv[a]));
			if (head == NULL)
				free_stack(&head);
		}
		else
		{
			new_node = ft_lstnew(ft_atoi(argv[a]));
			if (new_node == NULL)
				free_stack(&head);
			ft_lstadd_back(&head, new_node);
		}
		a++;
	}
	return (head);
}

void	print_stack(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		ft_printf("%d\n", current->content);
		current = current->next;
	}
}

int	is_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	rotate_dir(t_list **stack, t_list *node)
{
	t_list	*tmp;
	int		pos;
	int		len;
	int		node_seen;

	pos = 0;
	len = 0;
	node_seen = 0;
	tmp = *stack;
	while (tmp != NULL)
	{
		if (tmp == node)
			node_seen = 1;
		if (node_seen == 0)
			pos++;
		len++;
		tmp = tmp->next;
	}
	if (pos * 2 <= len)
		return (1);
	else
		return (0);
}
