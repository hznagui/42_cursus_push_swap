/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:57:19 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/26 12:42:05 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_switch_first_two(t_list **p)
{
	t_list	*first;
	t_list	*second;

	first = *p;
	second = first->next;
	first ->next = second->next;
	second ->next = first;
	*p = second;
}
//------------------------------------------------------------------------//

void	ft_to_the_bottom(t_list **p)
{
	t_list	*first;

	first = *p;
	ft_lstadd_back(p, first);
	*p = (*p)->next;
	first->next = NULL;
}
//------------------------------------------------------------------------//

void	to_the_top(t_list **p)
{
	t_list	*last;
	t_list	*before_last;

	last = *p;
	before_last = *p;
	while (before_last->next->next)
	{
		before_last = before_last ->next;
	}
	last = before_last->next;
	ft_lstadd_front(p, last);
	before_last->next = NULL;
}
//------------------------------------------------------------------------//

void	push(t_list **stack_src, t_list **stack_dst)
{
	t_list	*first;

	first = *stack_src;
	*stack_src = (*stack_src)->next;
	first ->next = NULL;
	ft_lstadd_front(stack_dst, first);
}
//------------------------------------------------------------------------//
void ft_rr(t_list **stack1, t_list **stack2)
{
    ft_to_the_bottom(stack1);
    ft_to_the_bottom(stack2);
    write(1,"rr\n",3);
}