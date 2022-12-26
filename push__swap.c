/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push__swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:33:50 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/26 12:38:53 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_list **p)
{
    ft_switch_first_two(p);
    write(1,"sa\n",3);
}
//------------------------------------------------------------------------//
void ft_sb(t_list **p)
{
    ft_switch_first_two(p);
    write(1,"sb\n",3);
}
//------------------------------------------------------------------------//
void ft_ss(t_list **stack1, t_list **stack2)
{
    ft_switch_first_two(stack1);
    ft_switch_first_two(stack2);
    write(1,"ss\n",3);
}
//------------------------------------------------------------------------//
void ft_ra(t_list **stack1)
{
    ft_to_the_bottom(stack1);
    write(1,"ra\n",3);
}
//------------------------------------------------------------------------//
void ft_rb(t_list **stack2)
{
    ft_to_the_bottom(stack2);
    write(1,"rb\n",3);
}

