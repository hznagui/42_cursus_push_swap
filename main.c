/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/19 12:51:17 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

char *ft_error(char **argc, int argv)
{
 int i;
 int a;
 a = 1;
 i = 0;
 while(a < argv)
 {
    while(argc[a][i] != '\0')
    {
        if (ft_isalpha(argc[a][i]))
        {
            return("Error\n");
        }
        i++;        
    }
    i = 0;
    a++;
}
return (0);
}

int main(int argv,char **argc)
{
    printf("%s",ft_error(argc,argv));
}