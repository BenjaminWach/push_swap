/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:05:08 by bwach             #+#    #+#             */
/*   Updated: 2023/12/05 21:00:35 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	int				val_index;
	struct s_list	*next;
}				t_list;

/*main*/
int		main(int argc, char *argv[]);

//instructions
int		ft_swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

//utils
void	error_msg(char *msg);
int		ft_isnum(char *str);
void	valid_argv(int argc, char *argv[]);
void	free_stack(t_list **stack);

#endif