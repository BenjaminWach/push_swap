/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:47:25 by bwach             #+#    #+#             */
/*   Updated: 2023/12/05 13:37:49 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa : swap a -> les deux prems de a
int	sa(t_list **stack_a)
{
	t_list	*top_a;
	t_list	*second_a;
	int		first;

	top_a = *stack_a;
	*stack_a = first;
	first = top_a;
}

// sb : swap b -> les deux prems de b
// ss : les deux en meme temps
// pa : push a -> prem de b dans le prem de a
// pb : push b -> prem de a dans b
// ra : rota a -> le prem devient le der
// rb : rota b -> meme chose que b
// rr : les deux 
// rra : reverse rotate a -> le dernier element devient le prem
// rrb : ....
// rrr : les deux en meme temps
