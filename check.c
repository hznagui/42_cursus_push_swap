/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:51:04 by hznagui           #+#    #+#             */
/*   Updated: 2023/01/03 18:46:31 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check(t_list **start)
{
	t_list	*p;

	p = *start;
	while (p->next)
	{
		if ((int)p->content > (int)p->next->content)
		{
			return (1);
		}
		p = p->next;
	}
	return (0);
}

//------------------------------------------------------------------------//
void	ft_index(t_list **stack1)
{
	t_list	*p;
	t_list	*l;

	p = *stack1;
	while (p)
	{
		l = *stack1;
		while (l != p)
		{
			if ((int)l->content > (int)p->content)
				l->index += 1;
			else
			{
				p->index += 1;
			}
			l = l->next;
		}
		p = p->next;
	}
}

//------------------------------------------------------------------------//
void	push_the_smallest(t_list **stack1, t_list **stack2)
{
	t_list	*p;
	t_list	*l;

	p = *stack1;
	l = *stack1;
	while (p)
	{
		if ((int)p->content < (int)l->content)
			l = p;
		p = p->next;
	}
	while (l->content != (*stack1)->content)
	{
		if (ft_lstsize(l) >= ft_lstsize(*stack1) / 2)
			ft_ra(stack1);
		else
			ft_rra(stack1);
	}
	ft_pb(stack2, stack1);
}

//------------------------------------------------------------------------//
void	push_the_biggest(t_list **stack1, t_list **stack2)
{
	t_list	*p;
	t_list	*l;

	p = *stack2;
	l = *stack2;
	while (p)
	{
		if ((int)p->index > (int)l->index)
			l = p;
		p = p->next;
	}
	while (l->index != (*stack2)->index)
	{
		if (ft_lstsize(l) >= ft_lstsize(*stack2) / 2)
			ft_rb(stack2);
		else
			ft_rrb(stack2);
	}
	ft_pa(stack1, stack2);
}
