/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_fonctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:06:44 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/28 13:37:05 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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
t_list *ft_lstiter(t_list *lst)
{
	t_list	*p;

	if (!lst)
		return (0);
	p = lst;
	while (p)
	{
		free(p -> content);
		p = p -> next;
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