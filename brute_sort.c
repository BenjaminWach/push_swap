/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:42:16 by bwach             #+#    #+#             */
/*   Updated: 2023/12/07 12:58:08 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_3(t_list **stack_a)
{
	t_list	*top;

	top = *stack_a;
		
}

int	brute_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(stack_a);
	if (ft_sorted(stack_a) || size == 0)
		return ;
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
	return (0);
}
