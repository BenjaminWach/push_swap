/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:47:25 by bwach             #+#    #+#             */
/*   Updated: 2023/12/09 14:05:59 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_num **stack)
{
	t_num	*top;
	t_num	*next;
	int		tmp_val;
	int		tmp_i;

	if (ft_lstsize_pw(*stack) < 2)
		return (-1);
	top = *stack;
	next = top->next;
	if (!top && !next)
		error_msg("Error with SA");
	tmp_val = top->value;
	tmp_i = top->val_index;
	top->value = next->value;
	top->val_index = next->val_index;
	next->value = tmp_val;
	next->val_index = tmp_i;
	return (0);
}

// sa : swap a -> les deux prems de a
int	sa(t_num **stack_a)
{
	if (ft_swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

// sb : swap b -> les deux prems de b
int	sb(t_num **stack_b)
{
	if (ft_swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

// ss : les deux en meme temps
int	ss(t_num **stack_a, t_num **stack_b)
{
	if (ft_lstsize_pw(*stack_a) < 2 || ft_lstsize_pw(*stack_b) < 2)
		return (-1);
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}
