/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:57:19 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/23 18:04:10 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_switch_firsttwo(t_list **p)
{
	t_list *first;
	t_list *second;

	first = *p;
	second = first->next;
	first ->next = second->next;
	second ->next = first;
	*p = second;
}
//------------------------------------------------------------------------//
void ft_to_the_bottom(t_list **p)
{
	t_list *first;
	t_list *second;
	first = *p;
	ft_lstadd_back(p,first);
	*p = (*p)->next;
	first->next = NULL;
}
//------------------------------------------------------------------------//
