/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:54:16 by bwach             #+#    #+#             */
/*   Updated: 2023/12/10 02:07:41 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//find the pos of non_indexed next min
static t_num	*pointer_min(t_num **stack)
{
	t_num	*top;
	t_num	*min;
	int		curr_min;
	int		flag;

	min = NULL;
	curr_min = 0;
	top = *stack;
	flag = 0;
	if (top)
	{
		while (top)
		{
			if (!flag && (top->val_index == (-1))
				&& (!curr_min || top->value < min->value))
			{
				min = top;
				curr_min = 1;
			}
			top = top->next;
			flag = 0;
		}
	}
	return (min);
}

//assign indices to stacks
void	give_index_stack(t_num **stack)
{
	t_num	*top;
	int		index;

	index = 0;
	top = pointer_min(stack);
	while (top)
	{
		top->val_index = index++;
		top = pointer_min(stack);
	}
}
