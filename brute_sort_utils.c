/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:34:49 by bwach             #+#    #+#             */
/*   Updated: 2023/12/10 01:18:22 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa_and_rra(t_num **stack_a)
{
	sa(stack_a);
	rra(stack_a);
	return (0);
}

int	sa_and_ra(t_num **stack_a)
{
	sa(stack_a);
	ra(stack_a);
	return (0);
}

int	ra_and_ra(t_num **stack_a)
{
	ra(stack_a);
	ra(stack_a);
	return (0);
}

int	rra_and_rra(t_num **stack_a)
{
	rra(stack_a);
	rra(stack_a);
	return (0);
}
