/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_fonctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:06:44 by hznagui           #+#    #+#             */
/*   Updated: 2023/01/07 10:04:45 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	else if (*lst == 0)
		*lst = new;
	else
	{
		p = *lst;
		while (p -> next)
		{
			p = p -> next;
		}
		p -> next = new ;
	}
}
//------------------------------------------------------------------------//

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

//------------------------------------------------------------------------//
t_list	*ft_lstclear(t_list **lst)
{
	t_list	*p;

	if (!lst)
		return (0);
	while ((*lst))
	{
		p = (*lst);
		*lst = (*lst)->next;
		free (p);
	}
	return (0);
}

//------------------------------------------------------------------------//
t_list	*ft_lstnew(long long *content)
{
	t_list	*p;

	p = malloc (sizeof(t_list));
	if (!p)
		return (0);
	p -> next = NULL;
	p -> content = content;
	p -> index = 0;
	return (p);
}

//------------------------------------------------------------------------//
int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		i;

	if (!lst)
		return (0);
	i = 0;
	p = lst;
	while (p)
	{
		p = p -> next;
		i++;
	}
	return (i);
}
