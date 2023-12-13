/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:02:38 by bwach             #+#    #+#             */
/*   Updated: 2023/12/10 03:38:13 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize_pw(t_num *head)
{
	size_t	i;
	t_num	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_num	*ft_lstlast_pw(t_num *top)
{
	while (top && top->next)
		top = top->next;
	return (top);
}

void	sort_last_3(t_num **stack_a)
{
    int	top = (*stack_a)->value;
    int	med = (*stack_a)->next->value;
    int	bot = (*stack_a)->next->next->value;

    if (top > med && med > bot)
        sa_and_rra(stack_a);
    else if (top > med && med < bot && bot < top)
        sa(stack_a);
    else if (top < med && med > bot && bot > top)
        ra(stack_a);
    else if (top < med && med > bot && bot < top)
        sa_and_ra(stack_a);
    else if (top < med && med > bot && bot < top)
        rra(stack_a);
}
