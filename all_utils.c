/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:22:27 by bwach             #+#    #+#             */
/*   Updated: 2023/12/10 02:58:29 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_num	*ft_lstnew_pw(int value)
{
	t_num	*new;

	new = (t_num *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	else
	{
		new->value = value;
		new->val_index = -1;
		new->next = NULL;
	}
	return (new);
}

void	ft_lstadd_back_pw(t_num **stack, t_num *new)
{
	t_num	*tmp;

	if (*stack)
	{
		tmp = ft_lstlast_pw(*stack);
		tmp->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		new->next = NULL;
	}
}

void	free_stack(t_num **stack)
{
	t_num	*first;
	t_num	*tmp;

	first = *stack;
	while (first)
	{
		tmp = first;
		first = first->next;
		free(tmp);
	}
	free(stack);
}

int	ft_sorted(t_num **stack_a)
{
	t_num	*top;

	top = *stack_a;
	while (top && top->next)
	{
		if (top->value > top->next->value)
			return (0);
		top = top->next;
	}
	return (1);
}

int	min_value(t_num **stack)
{
	t_num	*current;
	int		min_val;

	current = *stack;
	min_val = current->value;
	while (current)
	{
		if (current->value < min_val)
			min_val = current->value;
		current = current->next;
	}
	return (min_val);
}
