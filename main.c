/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/23 15:17:39 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_list **p)
{
	t_list *first;
	first = *p;
	*p = first->next;
	ft_lstadd_back(p,first);
}
int main(int argc,char **argv)
{
	t_list *d;
	if (argc == 1)
		return (0);
	ft_error(argv,argc);
	d = ft_split(argv,' ');
	ft_check_double(d);
	ft_ra(&d);
	while (d)
	{
		printf("%d\n",(int)d->content);
		d = d->next;
	}
	return (0);
}