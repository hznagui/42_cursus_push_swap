/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2023/01/07 10:53:56 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list *stack1, t_list *stack2)
{
	if (ft_check(&stack1))
	{
		if (ft_lstsize(stack1) == 3)
			ft_case_1(&stack1);
		else if (ft_lstsize(stack1) == 5)
			ft_case_2(&stack1, &stack2);
		else if (ft_lstsize(stack1) == 500 || ft_lstsize(stack1) == 100)
		{
			ft_index(&stack1);
			if (ft_lstsize(stack1) == 100)
				ft_case_3(&stack1, &stack2);
			else
				ft_case_4(&stack1, &stack2);
			while (stack2)
				push_the_biggest(&stack1, &stack2);
		}
		else
			ft_case_5(&stack1, &stack2);
	}
	ft_lstclear(&stack1);
}

int	main(int argc, char **argv)
{
	t_list	*stack1;
	t_list	*stack2;

	if (argc == 1)
		return (0);
	stack2 = NULL;
	ft_error(argv, argc);
	stack1 = ft_split(argv, ' ');
	ft_check_double(stack1);
	push_swap(stack1, stack2);
	return (0);
}
