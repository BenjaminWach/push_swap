/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:04:34 by bwach             #+#    #+#             */
/*   Updated: 2023/12/06 11:29:59 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rev_rot(t_list **stack)
{
	t_list	*bottom;
	t_list	*before_bot;

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
int	rra(t_list **stack_a)
{
	ft_rev_rot(stack_a);
	return (0);
}

// rrb : ....
int	rrb(t_list **stack_b)
{
	ft_rev_rot(stack_b);
	return (0);
}

// rrr : les deux en meme temps
int	rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rev_rot(stack_a);
	ft_rev_rot(stack_b);
	return (0);
}
