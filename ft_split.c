/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:11:43 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/22 17:25:32 by hznagui          ###   ########.fr       */
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

static t_list	*ft_return(char **s, char c, t_list *p)
{
	size_t	e;
	size_t	u;
	size_t	a;
	size_t	h;
	t_list	*j;

	u = 0;
	a = 0;
	h = 1;
	while (s[h])
	{
		if (s[h] [a] == '\0')
			return(p);
		while (u < nbr_of_words(s[h], c))
		{
			while (s[h][a] == c && s[h][a] != '\0')
				a++;
			e = a;
			while (s[h][e] != c && s[h][e] != '\0')
				e++;
			j = ft_lstnew((void *)ft_atoi(&s[h][a]));
			if (!j)
				return (ft_lstiter(p));
			ft_lstadd_back(&p, j);
			u++;
			a = e;
		}
		u = 0;
		a = 0;
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

