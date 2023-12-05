/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:56:03 by bwach             #+#    #+#             */
/*   Updated: 2023/12/06 00:03:20 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pa : push a -> prem de b dans le prem de a
// pb : push b -> prem de a dans b
int	ft_push(t_list **stack_src, t_list **stack_dest)
{
	t_list	*top_src;
	t_list	*top_dest;
	t_list	*tmp;

	top_src = *stack_src;
	top_dest = *stack_dest;
	if (ft_lstsize(*stack_src) == 0)
		return (-1);
	tmp = top_dest;
	top_dest = top_dest->next;
	*stack_dest = top_dest;

}