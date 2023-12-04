/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:37:42 by bwach             #+#    #+#             */
/*   Updated: 2023/12/04 15:36:24 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_merge(t_list **stack_a, t_list **stack_b)
{
	t_list	*first;
	int		i;
	int		j;
	int		size_list;

	size_list = ft_lstsize(stack_a);
	if (*stack_a == NULL)
}