/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:21:25 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/28 11:21:33 by hznagui          ###   ########.fr       */
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
		if (p->content < (*stack1)->content)
			ft_ra(stack1);
		else
			ft_sa(stack1);
	}
}