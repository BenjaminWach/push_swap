/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:17:36 by bwach             #+#    #+#             */
/*   Updated: 2023/11/29 00:06:57 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(char *msg)
{
	write(1, "Error\n", 6);
	exit(0);
}

static void	ft_free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		free(str[i++]);
}

//Check if number
int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
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
		if (ft_atoi(arg[pos]) == num)
			return (1);
		pos++;
	}
	return (0);
}

void	valid_argv(int argc, char *argv[])
{
	int				i;
	unsigned int	tmp;
	char			**arg;

	if (argc == 2)
	// si on a une str on la split avec des espaces
		arg = ft_split(argv[1], ' ');
	i = 1;
	arg = argv;
	while (arg[i]) //dans la boucle: on gere tous les cas d'erreurs
	{
		tmp = ft_atoi(arg[i]); //on change les chars en int
		if (tmp < INT_MIN || tmp > INT_MAX)
			error_msg("Error");
		else if (!ft_isnum(arg[i])) //on check si c'est un nombre
			error_msg("Error");
		else if (ft_valid_num(tmp, arg, i))
			error_msg("Error");
		i++;
	}
	if (argc == 2) //on libere arg
		ft_free_str(arg);
}
