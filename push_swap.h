/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:13:24 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/23 15:48:47 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

t_list *ft_split(char **s, char c);
long long ft_atoi( char *str);
size_t	ft_strlen(char *s);
t_list *ft_lstiter(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list *ft_lstiter(t_list *lst);
t_list	*ft_lstnew(void *content);
void ft_error(char **argv, int argc);
void ft_check_double(t_list *p);
void ft_switch_firsttwo(t_list **p);
int	ft_lstsize(t_list *lst);

#endif
