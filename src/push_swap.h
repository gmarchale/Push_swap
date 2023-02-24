/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:17:31 by gmarchal          #+#    #+#             */
/*   Updated: 2023/02/24 17:51:18 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include"../Libft/libft.h"

t_list	*init_stack(int argc, char **argv);
void	print_stack(t_list *head);
int		get_bits(int max);
int		len_array(int *array);
int		ft_len_stack(t_list **stack);
t_list	*init_stack(int argc, char **argv);
void	normalize_stack(t_list **stack);
void	free_tab(char **tab);
void	free_stack(t_list **stack);
int		is_sorted(t_list **stack);
t_list	*find_min(t_list **stack);
int		rotate_dir(t_list **stack, t_list *node);

void	pb(t_list **stack_b, t_list **stack_a);
void	pa(t_list **stack_b, t_list **stack_a);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rb(t_list **stack);
void	ra(t_list **stack);
void	sa(t_list **stack);
void	sb(t_list **stack);
void	ss(t_list **stack_a, t_list **stack_b);

void	min_sort(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
#endif
