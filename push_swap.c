/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:08:39 by bwach             #+#    #+#             */
/*   Updated: 2023/11/28 13:04:20 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	**push_swap(int **array)
{
	
}

void	*main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc <= 2)
		ft_printf("Please enter valid number of arguments.");
	while (i <= argv[argc])
	{
		if (argv[i++] != isdigit)
			return (write(1, "Error \n", 8));
		return (push_swap(*argv[i++]));
	}
}
