/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:42:16 by bwach             #+#    #+#             */
/*   Updated: 2023/12/10 03:31:17 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_list(t_num *head)
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
	printf("top = %d, med = %d, bot = %d\n", top, med, bot);
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
	print_list(*stack_a);
	printf("fin de sort_3\n");
}

static void	sort_4(t_num **stack_a, t_num **stack_b)
{
	int	min_val;

	min_val = min_value(stack_a);
	printf("min_val = %d\n", min_val);
	while ((*stack_a)->value != min_val)
	{
		print_list(*stack_a);
		printf("on rentre dans ra\n");
		ra(stack_a);
		print_list(*stack_a);
	}
	printf("on rentre dans pb\n");
	pb(stack_a, stack_b);
	sort_last_3(stack_a);
	while ((*stack_a)->value != min_val)
		rra(stack_a);
	pa(stack_a, stack_b);
	print_list(*stack_a);
	printf("fin de sort_4\n");
}

static void	sort_5(t_num **stack_a, t_num **stack_b)
{
	int	min_val;

	min_val = min_value(stack_a);
	while ((*stack_a)->value != min_val)
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
	print_list(*stack_a);
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
	{
		printf("size_sort_3\n");
		sort_3(stack_a);
	}
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
}
