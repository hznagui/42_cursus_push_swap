/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:57:19 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/23 15:09:01 by hznagui          ###   ########.fr       */
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
