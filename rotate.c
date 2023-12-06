/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:35:49 by bwach             #+#    #+#             */
/*   Updated: 2023/12/06 11:03:54 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	if (!stack)
		return (-1);
	ft_lstadd_back(stack, tmp);
	return (0);
}

// ra : rota a -> le prem devient le der
int	ra(t_list **stack_a)
{
	ft_rotate(stack_a);
	return (0);
}

// rb : rota b -> meme chose que b
int	rb(t_list **stack_b)
{
	ft_rotate(stack_b);
	return (0);
}

// rr : les deux
int	rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	return (0);
}
