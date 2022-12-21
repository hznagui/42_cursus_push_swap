/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:29:38 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/21 14:21:56 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	y;
	size_t	a;
	char	*p;

	a = 0;
	y = 0;
	if (!s1 || !s2)
		return (0);
	p = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!p)
		return (0);
	while (y < ft_strlen(s1))
	{
		p[y] = s1[y];
		y++;
	}
	while (a <= ft_strlen(s2))
	{
		p[y + a] = s2[a];
		a++;
	}
	return (p);
}
