/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/26 13:34:08 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc,char **argv)
{
	t_list *stack1;
	// t_list *stack2;
	if (argc == 1)
		return (0);
	ft_error(argv,argc);
	stack1 = ft_split(argv,' ');
	ft_check_double(stack1);
	ft_ra(&stack1);
	ft_rra(&stack1);
	
	while (stack1)
	{
		printf("\n--%d--",(int)stack1->content);
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