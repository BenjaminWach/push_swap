/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:05:08 by bwach             #+#    #+#             */
/*   Updated: 2023/11/28 12:50:18 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void		*content;
	struct		s_a;
	struct		s_b;
}				t_list;

struct	s_stack_a
{
	int	*a;
}s_a;

struct	s_stack_b
{
	int	*b;	
}s_b;

//main
void	*main(int argc, char *argv[]);

//secondaries
#endif 