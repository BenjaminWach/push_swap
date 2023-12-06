/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:56:03 by bwach             #+#    #+#             */
/*   Updated: 2023/12/06 10:33:31 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_list **stack_dest, t_list **stack_src)
{
	t_list	*top_src;
	t_list	*top_dest;
	t_list	*tmp;

	top_src = *stack_src;
	top_dest = *stack_dest;
	if (ft_lstsize(*stack_src) == 0)
		return (-1);
	tmp = stack_src;
	stack_src = top_src->next;
	*stack_src = top_src;
	if (!top_dest)
	{
		top_dest = tmp;
		top_dest->next = NULL;
		*stack_dest = top_dest;
	}
	else
	{
		tmp->next = top_dest;
		*stack_dest = top_dest;
	}
	return (0);
}

// pa : push a -> prem de b dans le prem de a
int	pa(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putendl_fd("pa", 1);
	return (0);
}

// pb : push b -> prem de a dans b
int	pb(t_list **stack_b, t_list **stack_a)
{
	ft_push(stack_b, stack_a);
	ft_putendl_fd("pb", 1);
	return (0);
}
