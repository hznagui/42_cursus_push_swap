/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:11:43 by hznagui           #+#    #+#             */
/*   Updated: 2023/01/07 10:00:00 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	nbr_of_words(char *s, char c)
{
	size_t	k;
	size_t	h;
	size_t	l;

	k = 0;
	h = 0;
	l = 0;
	while (s[k])
	{
		if (s[k] != c && h == 0)
		{
			l++;
			h = 1;
		}
		else if (s[k] == c && h == 1)
		{
			h = 0;
		}
		k++;
	}
	return (l);
}

t_list	*create_nodes(char **s, char c, t_list *p, size_t	h)
{
	size_t	u;
	size_t	a;
	size_t	e;
	t_list	*j;

	u = 0;
	a = 0;
	while (u < nbr_of_words(s[h], c))
	{
		while (s[h][a] == c && s[h][a] != '\0')
			a++;
		e = a;
		while (s[h][e] != c && s[h][e] != '\0')
			e++;
		j = ft_lstnew((long long *)ft_atoi(&s[h][a]));
		if (!j)
			return (ft_lstclear(&p));
		ft_lstadd_back(&p, j);
		a = e;
		u++;
	}
	return (p);
}

static t_list	*ft_return(char **s, char c, t_list *p)
{
	size_t	h;

	h = 1;
	while (s[h])
	{
		if (s[h][0] == '\0')
			return (p);
		p = create_nodes(s, c, p, h);
		if (!p)
			ft_abort ();
		if (nbr_of_words(s[h], c) == 0)
			ft_abort ();
		h++;
	}
	return (p);
}

t_list	*ft_split(char **s, char c)
{
	t_list	*p;

	if (!s)
		return (0);
	p = NULL;
	return (ft_return(s, c, p));
}
