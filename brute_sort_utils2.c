/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_sort_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:35:22 by bwach             #+#    #+#             */
/*   Updated: 2023/12/14 15:38:42 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_min(t_num **stack_a, t_num **stack_b)
{
	int	min_val;
	int	min_pos;
	int	size;

	size = ft_lstsize_pw(*stack_a);
	min_val = min_value(stack_a);
	min_pos = find_position(stack_a, min_val);
	while ((int)(*stack_a)->value != min_val)
	{
		if (min_pos > size / 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pb(stack_b, stack_a);
}
