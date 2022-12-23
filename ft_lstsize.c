/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:42:51 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/23 15:48:04 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		i;

	if (!lst)
		return (0);
	i = 0;
	p = lst;
	while (p)
	{
		p = p -> next;
		i++;
	}
	return (i);
}
