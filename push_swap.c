/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:08:39 by bwach             #+#    #+#             */
/*   Updated: 2023/11/30 11:36:00 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	init_stack(t_list **stack, int *argc, char **argv)
{
	int		i;
	char	**tmp;
	t_list	*new;

	if (argc == 2)
		ft_split(argv[1], ' ');
	i = 1;
	tmp = argv;
	while (tmp[i])
	{
		new = ft_lstnew(ft_atoi(tmp[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	stack_index(stack);
	if (argc == 2)
		ft_free_str(tmp);
}

static void	sorting(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(stack_a) <= 5)
		merge_sort(stack_a, stack_b);
	else
		radix_merge(stack_a, stack_b);
}

int	main(int argc, char *argv[])
{
	int		i;
	t_list	**stack_a;
	t_list	**stack_b;

	i = 0;
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	if (argc <= 2)
		error_msg("Error");
	valid_argv(argc, **argv);
	init_stack(*stack_a, argc, **argv);
	if (finished_sort(stack_a, stack_b))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	sorting(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
