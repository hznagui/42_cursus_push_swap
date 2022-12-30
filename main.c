/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/30 16:39:11 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	if (!lst)
		return (NULL);
	while (p -> next)
	{
		p = p -> next;
	}
	return (p);
}

void ft_case_3(t_list **stack1, t_list **stack2)
{
	int p1;
	int p2;
	int oldp1;
	p1 = 0;
	p2 = 0;
	ft_index(stack1);
	while (ft_lstsize(*stack1)>3)
	{
		oldp1 = p1;
		p1 += ft_lstsize(*stack1)/3;
		p2 = p1 - ((p1 - oldp1) / 2);
		while (ft_lstsize(*stack2) < p1)
		{	
			if ((int)(*stack1)->index <= p1)
			{
				ft_pb(stack2,stack1);
				if ((int)(*stack2)->index <= p2)
				{
					ft_rb(stack2);
				}
			}
			else
			{
				ft_ra(stack1);
			}
		}
	}
	ft_case_1(stack1);
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
	// ft_index(&stack1);
	// while (stack1)
	// {
	// 	printf("\n%d",(int)stack1->index);
	// 	stack1 = stack1->next;
	// }
	// printf("\ntisa3\n");
	// while (stack2)
	// {
	// 	printf("--%d--\n",(int)stack2->content);
	// 	stack2 = stack2->next;
	// }
	
	
	return (0);
}