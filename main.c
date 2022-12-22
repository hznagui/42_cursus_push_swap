/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/22 17:49:13 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int ft_error(char **argc, int argv)
{
    int i;
    int a;
    
    a = 1;
    i = 0;
    while(a < argv)
    {
       while(argc[a][i] != '\0')
       {
           if ((argc[a][i] >= 64 && argc[a][i] <= 127) || (argc[a][i] >= 33 && argc[a][i] <= 44) || (argc[a][i] >= '.' && argc[a][i] <= '/') || (argc[a][i] == '-' && (argc[a][i + 1] > '9' || argc[a][i + 1] < '0' || argc[a][i - 1] != '\0' || argc[a][i - 1] != ' ')) )
               return(1);
           i++;        
       }
       i = 0;
       a++;
    }
return (0);
}
int ft_check_double(t_list *p)
{
    t_list *h;
    t_list *o;
    
    h = p;
    while (h)
    {
        if ((long long)h->content > INT_MAX || (long long)h->content < INT_MIN)
            return(1);
        o = h->next;
        while (o)
        {
            if (o->content == h->content)
                return(1);
            else
            {
                o = o->next;
            }
        }
        h = h->next;
    }
    return (0);
}
int main(int argc,char **argv)
{
    if (argc == 1)
        return (0);
    if (ft_error(argv,argc) == 1) {
        write(2, "Error\n", 6);
        return(-1);
    }
			t_list *d;
	d = ft_split(argv,' ');
    if (ft_check_double(d) == 1) {
        write(2, "Error\n", 6);
        return(-1);
    }
	while (d)
	{
		printf("%d\n",(int)d->content);
		d=d->next;
	}
    return (0);
}//200000000000 
 //2147483647