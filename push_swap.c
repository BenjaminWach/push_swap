/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:08:39 by bwach             #+#    #+#             */
/*   Updated: 2023/12/18 03:27:22 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_stack(t_num **stack, int argc, char **argv)
{
	int		i;
	char	**tmp;
	t_num	*new;

	i = 0;
	if (argc == 2)
		tmp = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		tmp = argv;
	}
	while (tmp[i])
	{
		new = ft_lstnew_pw(ft_atoi(tmp[i]));
		ft_lstadd_back_pw(stack, new);
		i++;
	}
	give_index_stack(stack);
	if (argc == 2)
		ft_free_str(tmp);
}

static void	sorting(t_num **stack_a, t_num **stack_b)
{
	int	size;

	size = ft_lstsize_pw(*stack_a);
	if (size <= 5)
		brute_sort(stack_a, stack_b);
	else
		radix_recur(stack_a, stack_b, 0);
}

int	main(int argc, char *argv[])
{
	t_num	**stack_a;
	t_num	**stack_b;

	if (argc < 2 || argv[1][0] == '\0')
		error_msg("Error");
	stack_a = (t_num **)malloc(sizeof(t_num *));
	stack_b = (t_num **)malloc(sizeof(t_num *));
	*stack_a = NULL;
	*stack_b = NULL;
	valid_argv(argc, argv);
	init_stack(stack_a, argc, argv);
	if (ft_sorted(stack_a))
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
