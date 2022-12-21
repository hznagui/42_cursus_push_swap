/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:31:40 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/21 16:26:49 by hznagui          ###   ########.fr       */
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
           if ((argc[a][i] >= 64 && argc[a][i] <= 127) || (argc[a][i] >= 33 && argc[a][i] <= 44) || (argc[a][i] >= '.' && argc[a][i] <= '/') || (argc[a][i] == '-' && (argc[a][i + 1] > '9' || argc[a][i + 1] < '0' || argc[a][i - 1] != ' ') ))
               return(1);
           i++;        
       }
       if (ft_atoi(argc[a]) == value)
           return(1);
       i = 0;
       a++;
}
return (0);
}

int main(int argc,char **argv)
{
    if (argc == 1)
        return (0);
    if (ft_error(argv,argc) == 1) {
        write(2, "Error\n", 6);
        return (130);
    }
    return (0);
}