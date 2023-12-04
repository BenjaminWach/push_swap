/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:22:27 by bwach             #+#    #+#             */
/*   Updated: 2023/12/04 14:35:20 by bwach            ###   ########.fr       */
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
