/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:13:24 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/22 16:46:42 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
# define value 5000000000
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

t_list *ft_split(char **s, char c);
long long ft_atoi( char *str);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
t_list *ft_lstiter(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, size_t len);
t_list	*ft_lstnew(void *content);


#endif
