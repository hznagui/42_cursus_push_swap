/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:51:04 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/28 14:06:28 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check(t_list **start)
{
    t_list *p;
    p = *start;
    
    while (p->next)
    {
        if((int)p->content > (int)p->next->content)
        {
            return (1);
        }
        p = p->next;
    }
    return (0);
}
