/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:55:44 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/22 18:29:48 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_stack(int argc, char **argv)
{
	int		i;
	t_list	*head;
	t_list	*new_node;

	i = 1;
	head = ft_lstnew(ft_atoi(argv[0]));
	if (argc == 0)
		return (0);
	while (argv[i])
	{
		if (i == 1)
		{
			head = ft_lstnew(ft_atoi(argv[i]));
			//if (head == NULL)
				//free
		}
		else
		{
			new_node = ft_lstnew(ft_atoi(argv[i]));
			//if (new_node == NULL)
				//free
			ft_lstadd_back(&head, new_node);
		}
		i++;
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

//void	print_stacks(t_list **stack_a, t_list **stack_b)

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
