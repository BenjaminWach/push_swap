/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:04:34 by bwach             #+#    #+#             */
/*   Updated: 2023/12/09 14:06:21 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rev_rot(t_num **stack)
{
	t_num	*bottom;
	t_num	*before_bot;

	if (!(*stack) || !(*stack)->next)
		return (-1);
	bottom = *stack;
	before_bot = NULL;
	while (bottom->next)
	{
		before_bot = bottom;
		bottom = bottom->next;
	}
	before_bot->next = NULL;
	bottom->next = *stack;
	*stack = bottom;
	return (0);
}

// rra : reverse rotate a -> le dernier element devient le prem
int	rra(t_num **stack_a)
{
	if (ft_rev_rot(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

// rrb : ....
int	rrb(t_num **stack_b)
{
	if (ft_rev_rot(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

// rrr : les deux en meme temps
int	rrr(t_num **stack_a, t_num **stack_b)
{
	if (ft_lstsize_pw(*stack_a) < 2 || ft_lstsize_pw(*stack_b) < 2)
		return (-1);
	ft_rev_rot(stack_a);
	ft_rev_rot(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
