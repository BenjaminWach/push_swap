/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:54:16 by bwach             #+#    #+#             */
/*   Updated: 2023/12/16 17:56:12 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	print_stack_index(t_num *head)
{
	t_num	*tmp;

	tmp = head;
	while (tmp)
	{
		printf("Valeur : %d, Index : %d\n", tmp->value, tmp->val_index);
		tmp = tmp->next;
	}
}*/

//find the pos of non_indexed next min
//top->value == -1 : non_indexed
//!curr_min : if first min (if not found)
//top->value < min->value : new min
static t_num	*pointer_min(t_num **stack)
{
	t_num	*top;
	t_num	*min;
	int		curr_min;

	min = NULL;
	curr_min = 0;
	top = *stack;
	if (top)
	{
		while (top)
		{
			if ((top->val_index == (-1))
				&& (!curr_min || top->value < min->value))
			{
				min = top;
				curr_min = 1;
			}
			top = top->next;
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
