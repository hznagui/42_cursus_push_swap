/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/29 14:50:22 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_index(t_list **stack1)
{
	t_list *p;
	t_list *l;
	
	p = *stack1;
	while(p)
	{
		l =	*stack1;
		while(l != p)
		{
			if ((int)l->content > (int)p->content)
				l->index+=1;
			else
			{
				p->index+=1;
			}
			l=l->next;
		}
		p=p->next;
	} 
}
void ft_case_3(t_list **stack1, t_list **stack2)
{ 
	while(*stack1)
	{
		push_the_smallest(stack1,stack2);
	}
	while (*stack2)
	{	
	ft_pb(stack2,stack1);
	}
}
int main(int argc,char **argv)
{
	t_list *stack1;
	t_list *stack2;
	if (argc == 1)
		return (0);
	ft_error(argv,argc);
	stack1 = ft_split(argv,' ');
	ft_check_double(stack1);
	ft_case_3(&stack1,&stack2);
	ft_index(&stack1);
	
	
	while (stack1)
	{
		printf("\n%d",(int)stack1->index);
		stack1 = stack1->next;
	}
	// printf("\ntisa3\n");
	// while (stack2)
	// {
	// 	printf("--%d--\n",(int)stack2->content);
	// 	stack2 = stack2->next;
	// }
	
	
	return (0);
}