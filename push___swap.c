/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push___swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:14:48 by hznagui           #+#    #+#             */
/*   Updated: 2023/01/02 13:37:57 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **stack1)
{
	to_the_top(stack1);
	write(1, "rra\n", 4);
}

//------------------------------------------------------------------------//
void	ft_rrb(t_list **stack2)
{
	to_the_top(stack2);
	write(1, "rrb\n", 4);
}

//------------------------------------------------------------------------//
void	ft_pa(t_list **stack1, t_list **stack2)
{
	push(stack2, stack1);
	write(1, "pa\n", 3);
}

//------------------------------------------------------------------------//
void	ft_pb(t_list **stack2, t_list **stack1)
{
	push(stack1, stack2);
	write(1, "pb\n", 3);
}

//------------------------------------------------------------------------//
void	ft_rrr(t_list **stack1, t_list **stack2)
{
	to_the_top(stack1);
	to_the_top(stack2);
	write(1, "rrr\n", 4);
}
