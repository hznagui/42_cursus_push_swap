/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/23 18:03:36 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc,char **argv)
{
	t_list *d;
	if (argc == 1)
		return (0);
	ft_error(argv,argc);
	d = ft_split(argv,' ');
	ft_check_double(d);
	ft_ra(&d);
	// int  j = ft_lstsize(d);
	// printf("%d\n", j);
	int i = 0;
	while (d)
	{
		printf("--%d--\n",(int)d->content);
		d = d->next;
		i++;
	}
	return (0);
}