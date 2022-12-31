/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/31 16:52:34 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc,char **argv)
{
	t_list *stack1;
	t_list *stack2;
	if (argc == 1)
		return (0);
	ft_error(argv,argc);
	stack1 = ft_split(argv,' ');
	ft_check_double(stack1);
	if (ft_check(&stack1))
	{
		if (ft_lstsize(stack1) == 3)
			ft_case_1(&stack1);
		else if(ft_lstsize(stack1) == 5)
			ft_case_2(&stack1,&stack2);
		else if(ft_lstsize(stack1) == 500 || ft_lstsize(stack1) == 100)
		{
			ft_index(&stack1);
			if (ft_lstsize(stack1) == 100)
				ft_case_3(&stack1,&stack2);
			else
				ft_case_4(&stack1,&stack2);
			while (stack2)
			push_the_biggest(&stack1,&stack2);
		}
		else
			ft_case_5(&stack1,&stack2);
	}
	while (stack1)
	{
		printf("\n%d",(int)stack1->index);
		stack1 = stack1->next;
	}
	return (0);
}
	// ft_index(&stack1);
	// printf("\ntisa3\n");
	// while (stack2)
	// {
	// 	printf("--%d--\n",(int)stack2->content);
	// 	stack2 = stack2->next;
	// }