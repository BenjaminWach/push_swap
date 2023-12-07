/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:37:42 by bwach             #+#    #+#             */
/*   Updated: 2023/12/07 14:24:51 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//find the max (index) though the linked list;
//find the most significant bit to represent the max (index);
static int	get_max_bit(t_list **stack_a)
{
	t_list	*top;
	int		max_ind;
	int		max_bit;

	top = *stack_a;
	max_ind = top->val_index;
	max_bit = 0;
	while (top)
	{
		if (top->val_index > max_ind)
			max_ind = top->val_index;
		top = top->val_index;
	}
	while ((max_ind >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	radix_merge(t_list **stack_a, t_list **stack_b)
{
	t_list	*top_a;
	int		i;
	int		j;
	int		size_list;
	int		ms_bit;

	top_a = *stack_a;
	size_list = ft_lstsize(top_a);
	ms_bit = get_max_bit(stack_a);
	i = 0;
	while (i < ms_bit)
	{
		j = 0;
		while (j++ < size_list)
		{
			top_a = *stack_a;
			if ()
		}
		i++;
	}
}