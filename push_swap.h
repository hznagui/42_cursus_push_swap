/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:13:24 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/28 15:16:09 by hznagui          ###   ########.fr       */
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
	long long			*content;
	struct s_list	*next;
}t_list;

t_list *ft_split(char **s, char c);
long long ft_atoi( char *str);
size_t	ft_strlen(char *s);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(long long *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list *ft_lstiter(t_list *lst);
void ft_error(char **argv, int argc);
void ft_check_double(t_list *p);
void ft_switch_first_two(t_list **p);
int	ft_lstsize(t_list *lst);
void ft_to_the_bottom(t_list **p);
void to_the_top(t_list **p);
void push(t_list **stack_src,t_list **stack_dst);
void ft_rr(t_list **stack1, t_list **stack2);
void ft_rb(t_list **stack2);
void ft_ra(t_list **stack1);
void ft_ss(t_list **stack1, t_list **stack2);
void ft_sb(t_list **p);
void ft_sa(t_list **p);
void ft_rrr(t_list **stack1, t_list **stack2);
void ft_pa(t_list **stack1,t_list **stack2);
void ft_pb(t_list **stack2, t_list **stack1);
void ft_rrb(t_list **stack2);
void ft_rra(t_list **stack1);
int ft_check(t_list **start);
void ft_case_1(t_list **stack1);
void ft_case_2(t_list **stack1, t_list **stack2);
void push_the_smallest(t_list **stack1, t_list **stack2);


#endif
