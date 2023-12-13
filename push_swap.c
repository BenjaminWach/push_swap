/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:08:39 by bwach             #+#    #+#             */
/*   Updated: 2023/12/09 15:21:51 by bwach            ###   ########.fr       */
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
	if (ft_lstsize_pw(*stack_a) <= 5)
	{
		printf("Appel de brute_sort\n");
		brute_sort(stack_a, stack_b);
	}
	else
	{
		printf("Appel de radix_sort\n");
		radix_merge(stack_a, stack_b);
	}
}

int	main(int argc, char *argv[])
{
	t_num	**stack_a;
	t_num	**stack_b;

	if (argc < 2)
		return (-1);
	stack_a = (t_num **)malloc(sizeof(t_num));
	stack_b = (t_num **)malloc(sizeof(t_num));
	*stack_a = NULL;
	*stack_b = NULL;
	valid_argv(argc, argv);
	init_stack(stack_a, argc, argv);
	if (ft_sorted(stack_a))
	{
		printf("La liste est deja triee\n");
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	printf("Avant\n");
	sorting(stack_a, stack_b);
	printf("Apres\n");
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
