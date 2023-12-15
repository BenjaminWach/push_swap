/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:42:16 by bwach             #+#    #+#             */
/*   Updated: 2023/12/15 19:09:42 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_num *head)
{
	t_num	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}

static void	sort_3(t_num **stack_a)
{
	int	top;
	int	med;
	int	bot;

	top = (*stack_a)->value;
	med = (*stack_a)->next->value;
	bot = (*stack_a)->next->next->value;
	if (top > med && med < bot && bot > top)
		sa(stack_a);
	else if (top > med && med > bot && bot < top)
		sa_and_rra(stack_a);
	else if (top > med && med < bot && bot < top)
		ra(stack_a);
	else if (top < med && med > bot && bot > top)
		sa_and_ra(stack_a);
	else if (top < med && med > bot && bot < top)
		rra(stack_a);
}

static void	sort_4(t_num **stack_a, t_num **stack_b)
{
	int	min_val;

	if (!stack_a || !stack_b)
		return ;
	min_val = min_value(stack_a);
	while ((int)(*stack_a)->value != min_val)
		ra(stack_a);
	pb(stack_b, stack_a);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

static void	sort_5(t_num **stack_a, t_num **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	push_min(stack_a, stack_b);
	push_min(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	brute_sort(t_num **stack_a, t_num **stack_b)
{
	int	size;

	size = ft_lstsize_pw(*stack_a);
	if (ft_sorted(stack_a) || size <= 1)
		return ;
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
}
