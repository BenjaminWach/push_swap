/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:05:08 by bwach             #+#    #+#             */
/*   Updated: 2023/12/13 23:06:38 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_num
{
	int				value;
	int				val_index;
	struct s_num	*next;
}				t_num;

/*main*/
int		main(int argc, char *argv[]);
void	print_list(t_num *head);

//algo
void	brute_sort(t_num **stack_a, t_num **stack_b);
void	radix_merge(t_num **stack_a, t_num **stack_b);
int		min_value(t_num **stack);
void	sort_last_3(t_num **stack_a);

//f**k
int		sa_and_rra(t_num **stack_a);
int		sa_and_ra(t_num **stack_a);
int		ra_and_ra(t_num **stack_a);
int		rra_and_rra(t_num **stack_a);

//instructions
int		ft_swap(t_num **stack);
int		sa(t_num **stack_a);
int		sb(t_num **stack_b);
int		ss(t_num **stack_a, t_num **stack_b);
int		ft_push(t_num **stack_dest, t_num **stack_src);
int		pa(t_num **stack_a, t_num **stack_b);
int		pb(t_num **stack_b, t_num **stack_a);
int		ft_rotate(t_num **stack);
int		ra(t_num **stack_a);
int		rb(t_num **stack_b);
int		rr(t_num **stack_a, t_num **stack_b);
int		ft_rev_rot(t_num **stack);
int		rra(t_num **stack_a);
int		rrb(t_num **stack_b);
int		rrr(t_num **stack_a, t_num **stack_b);

//utils
void	error_msg(char *msg);
int		ft_isnum(char *str);
void	valid_argv(int argc, char *argv[]);
void	free_stack(t_num **stack);
int		ft_sorted(t_num **stack_a);
t_num	*ft_lstnew_pw(int value);
t_num	*ft_lstlast_pw(t_num *top);
int		ft_lstsize_pw(t_num *head);
void	ft_lstadd_back_pw(t_num **lst, t_num *new);
void	give_index_stack(t_num **stack);
void	ft_free_str(char **str);

#endif