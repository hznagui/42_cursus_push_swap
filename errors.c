/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:33:05 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/31 15:04:29 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	abort(void)
{
	write(2, "Error\n", 6);
	exit (1);
}
//------------------------------------------------------------------------//

void	ft_error(char **argv, int argc)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	while (a < argc)
	{
		if (argv[a][0] == '\0')
			abort();
		while (argv[a][i] != '\0')
		{
			if ((argv[a][i] >= 64 && argv[a][i] <= 127) ||
			(argv[a][i] >= 33 && argv[a][i] <= 44) ||
			(argv[a][i] >= '.' && argv[a][i] <= '/') ||
			(argv[a][i] == '-' && ((argv[a][i + 1] > '9' ||
			argv[a][i + 1] < '0') || (argv[a][i - 1] != '\0' &&
			argv[a][i - 1] != ' '))))
				abort();
			i++;
		}
	i = 0;
	a++;
	}
}
//------------------------------------------------------------------------//

void	ft_check_double(t_list *p)
{
	t_list	*h;
	t_list	*o;

	h = p;
	while (h)
	{
		if ((long long)h->content > INT_MAX || (long long)h->content < INT_MIN)
			abort();
		o = h->next;
		while (o)
		{
			if (o->content == h->content)
				abort();
			else
			{
				o = o->next;
			}
		}
		h = h->next;
	}
}
