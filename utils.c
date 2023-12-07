/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:22:27 by bwach             #+#    #+#             */
/*   Updated: 2023/12/07 12:53:23 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*first;
	t_list	*tmp;

	first = *stack;
	while (first)
	{
		tmp = first;
		first = first->next;
		free(tmp);
	}
	free(stack);
}

int	ft_sorted(t_list **stack_a)
{
	t_list	*top;

	top = *stack_a;
	while (top && top->next)
	{
		if (top->value > top->next->value)
			return (1);
		top = top->next;
	}
	return (0);
}
