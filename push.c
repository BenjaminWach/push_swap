/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:56:03 by bwach             #+#    #+#             */
/*   Updated: 2023/12/13 14:12:45 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_num **stack_dest, t_num **stack_src)
{
	printf("on rentre dans ft_push\n");
	t_num	*top_src;
	//t_num	*top_dest;
	//t_num	*tmp;
	
	if (ft_lstsize_pw(*stack_src) == 0)
		return (-1);
	top_src = *stack_src;
	*stack_src = (*stack_src)->next;
	top_src->next = *stack_dest;
	*stack_dest = top_src;
	printf("on sort de ft_push\n");
	/*top_dest = *stack_dest;
	tmp = *stack_src;
	top_dest = top_src->next;
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
	}*/
	return (0);
}

// pa : push a -> prem de b dans le prem de a
int	pa(t_num **stack_a, t_num **stack_b)
{
	printf("on rentre dans pa\n");
	printf("stack_b = %p\n", *stack_b);
	if (ft_push(stack_a, stack_b) == -1)
		return (-1);
	printf("on rentre dans pa\n");
	ft_putendl_fd("pa", 1);
	return (0);
}

// pb : push b -> prem de a dans b
int	pb(t_num **stack_b, t_num **stack_a)
{
	printf("on rentre dans pb\n");
	printf("stack_a = %p\n", *stack_a);
	if (ft_push(stack_b, stack_a) == -1)
		return (-1);
	printf("on sort de pb\n");
	ft_putendl_fd("pb", 1);
	return (0);
}
