/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:13:24 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/21 16:17:18 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
# define value 5000000000
char	**ft_split(char const *s, char c);
long long ft_atoi(char *str);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;
#endif
