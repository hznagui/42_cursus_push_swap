/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:32:18 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/12 17:36:03 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long long ft_return(char *str,int c,long long z,int *o,int h , int i){
	int y = 0;
	while (y < ft_strlen(str))
	{
		c = 1;
		z = 0;
		i = 0;
		if (str[y] == '-')
		{
			c *= -1;
			y++;
		}
		while (str[y] >= '0' && str[y] <= '9')
		{
			z = 10 * z + (str[y] - '0');
			if ((z > 2147483647 && c == 1 )|| (z > 2147483648 && c == -1))
				return (free(o),value);
			y++;
		}

		while (i < h)
		{
			if (o[i] == z * c){
				return(free(o),value);
				}
			i++;
		}
		o[h] = z * c;
		h++;
		y++;
	}
	return (free(o),z * c);
}

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

long long ft_atoi(char *str)
{
	int		c;
	long long	z;
	int		i;
	int		*o;
	int		h;

	i = 0;
	h = 0;
	z = 0;
	c = 1;
	o = malloc((nbr_of_words(str, ' ')) * sizeof(int));
	return(ft_return(str,c,z,o,h,i));
}