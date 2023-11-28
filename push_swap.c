/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:08:39 by bwach             #+#    #+#             */
/*   Updated: 2023/11/29 00:02:51 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		i;
	t_list	**stack_a;
	t_list	**stack_b;

	i = 0;
	*stack_a = NULL;
	*stack_b = NULL;
	if (argc <= 2)
		error_msg("Error");
	valid_argv(argc, **argv);
}
