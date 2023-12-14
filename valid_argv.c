/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:17:36 by bwach             #+#    #+#             */
/*   Updated: 2023/12/14 15:02:04 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(1);
}

void	ft_free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
}

//Check if number
static long long int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
	{
		i++;
		if (str[i] == '\0')
			return (0);
	}
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (0);
	return (1);
}

//Check is there are double
static int	ft_valid_num(int num, char *arg[], int pos)
{
	pos++;
	while (arg[pos])
	{
		if (ft_atoi_pw(arg[pos]) == num)
			return (1);
		pos++;
	}
	return (0);
}

void	valid_argv(int argc, char *argv[])
{
	int				i;	
	char			**arg;
	long			tmp;

	i = 0;
	if (argc == 2)
		arg = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		arg = argv;
	}
	while (arg[i])
	{
		tmp = ft_atoi_pw(arg[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			error_msg("Error");
		if (!ft_isnum(arg[i]))
			error_msg("Error");
		if (ft_valid_num(tmp, arg, i))
			error_msg("Error");
		i++;
	}
	if (argc == 2)
		ft_free_str(arg);
}
