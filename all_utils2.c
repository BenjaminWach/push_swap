/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:02:38 by bwach             #+#    #+#             */
/*   Updated: 2023/12/13 14:41:51 by bwach            ###   ########.fr       */
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
