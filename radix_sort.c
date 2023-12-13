/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:37:42 by bwach             #+#    #+#             */
/*   Updated: 2023/12/09 19:02:15 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//find the max (index) though the linked list;
//find the most significant bit to represent the max (index);
static int	get_max_bit(t_num **stack_a)
{
	t_num	*top;
	int		max_ind;
	int		max_bit;

	top = *stack_a;
	max_ind = top->val_index;
	max_bit = 0;
	while (top)
	{
		if (top->val_index > max_ind)
			max_ind = top->val_index;
		top = top->next;
	}
	while ((max_ind >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	radix_merge(t_num **stack_a, t_num **stack_b)
{
	t_num	*top_a;
	int		i;
	int		j;
	int		size_list;
	int		ms_bit;

	top_a = *stack_a;
	size_list = ft_lstsize_pw(top_a);
	ms_bit = get_max_bit(stack_a);
	i = 0;
	while (i < ms_bit)
	{
		j = 0;
		while (j++ < size_list)
		{
			top_a = *stack_a;
			if (((top_a->val_index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize_pw(*stack_b) > 0)
			pa(stack_a, stack_b);
		i++;
	}
}
