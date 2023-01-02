/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:21:25 by hznagui           #+#    #+#             */
/*   Updated: 2023/01/02 13:22:01 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_case_1(t_list **stack1)
{
	t_list	*p;

	while (ft_check(stack1))
	{
		p = *stack1;
		while (p->next)
			p = p->next;
		if ((int)p->content < (int)(*stack1)->content)
			ft_ra (stack1);
		else
			ft_sa (stack1);
	}
}

//------------------------------------------------------------------------//
void	ft_case_2(t_list **stack1, t_list **stack2)
{
	push_the_smallest(stack1, stack2);
	push_the_smallest(stack1, stack2);
	ft_case_1(stack1);
	ft_pa(stack1, stack2);
	ft_pa(stack1, stack2);
}

//------------------------------------------------------------------------//
void	ft_case_3(t_list **stack1, t_list **stack2)
{
	int	p1;
	int	p2;
	int	oldp1;

	p1 = 0;
	while (ft_lstsize(*stack1) > 2)
	{
		oldp1 = p1;
		p1 += ft_lstsize(*stack1) / 3;
		p2 = p1 - ((p1 - oldp1) / 2);
		while (ft_lstsize(*stack2) < p1)
		{	
			if ((int)(*stack1)->index <= p1)
			{
				ft_pb(stack2, stack1);
				if ((int)(*stack2)->index <= p2)
					ft_rb(stack2);
			}
			else
				ft_ra(stack1);
		}
	}
	while (*stack1)
		push_the_smallest(stack1, stack2);
}

//------------------------------------------------------------------------//
void	ft_case_4(t_list **stack1, t_list **stack2)
{
	int	p1;
	int	p2;
	int	oldp1;

	p1 = 0;
	while (ft_lstsize(*stack1) > 15)
	{
		oldp1 = p1;
		p1 += ft_lstsize(*stack1) / 5.39;
		p2 = p1 - ((p1 - oldp1) / 2);
		while (ft_lstsize(*stack2) < p1)
		{	
			if ((int)(*stack1)->index <= p1)
			{
				ft_pb(stack2, stack1);
				if ((int)(*stack2)->index <= p2)
					ft_rb(stack2);
			}
			else
				ft_ra(stack1);
		}
	}
	while (*stack1)
		push_the_smallest(stack1, stack2);
}

//------------------------------------------------------------------------//
void	ft_case_5(t_list **stack1, t_list **stack2)
{
	while (*stack1)
		push_the_smallest(stack1, stack2);
	while (*stack2)
		ft_pa(stack1, stack2);
}
