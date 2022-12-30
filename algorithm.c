/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:21:25 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/30 14:31:45 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_case_1(t_list **stack1)
{
	t_list *p;
	while (ft_check(stack1))
	{
		p = *stack1;
		while (p->next)
			p = p->next;
		if ((int)p->content < (int)(*stack1)->content)
			ft_ra(stack1);
		else
			ft_sa(stack1);
	}
}
//------------------------------------------------------------------------//
void push_the_smallest(t_list **stack1, t_list **stack2)
{
	t_list *p;
	t_list *l;
	p = *stack1;
	l = *stack1;
	while (p)
	{
		if ((int)p->content < (int)l->content)
			l=p;
		p = p->next;
	}
	while (l->content != (*stack1)->content)
	{
		if (ft_lstsize(l) >= ft_lstsize(*stack1)/2)
			ft_ra(stack1);
		else
			ft_rra(stack1);
	}
	ft_pb(stack2,stack1);
}
//------------------------------------------------------------------------//
void ft_case_2(t_list **stack1, t_list **stack2)
{
	push_the_smallest(stack1,stack2);
	push_the_smallest(stack1,stack2);
	ft_case_1(stack1);
	ft_pa(stack1,stack2);
	ft_pa(stack1,stack2);
}
//------------------------------------------------------------------------//
void ft_index(t_list **stack1)
{
	t_list *p;
	t_list *l;
	
	p = *stack1;
	while(p)
	{
		l =	*stack1;
		while(l != p)
		{
			if ((int)l->content > (int)p->content)
				l->index+=1;
			else
			{
				p->index+=1;
			}
			l=l->next;
		}
		p=p->next;
	} 
}