/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:35:49 by bwach             #+#    #+#             */
/*   Updated: 2023/12/10 01:32:24 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_num **stack)
{
	t_num	*tmp;
	t_num	*next;

	tmp = *stack;
	next = (*stack)->next;
	if (ft_lstsize_pw(*stack) < 2)
		return (-1);
	ft_lstadd_back_pw(stack, tmp);
	*stack = next;
	tmp->next = NULL;
	return (0);
}

// ra : rota a -> le prem devient le der
int	ra(t_num **stack_a)
{
	if (ft_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

// rb : rota b -> meme chose que b
int	rb(t_num **stack_b)
{
	if (ft_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

// rr : les deux
int	rr(t_num **stack_a, t_num **stack_b)
{
	if (ft_lstsize_pw(*stack_a) < 2 || ft_lstsize_pw(*stack_b) < 2)
		return (-1);
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}
