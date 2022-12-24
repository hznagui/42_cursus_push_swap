/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/24 13:59:31 by hznagui          ###   ########.fr       */
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
	// ft_pa(&stack1,&stack2);
	// ft_pa(&stack1,&stack2);
	// ft_pa(&stack1,&stack2);
	// ft_pa(&stack1,&stack2);
	while (stack1)
	{
		printf("--%d--\n",(int)stack1->content);
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