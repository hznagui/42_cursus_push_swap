/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:57:19 by hznagui           #+#    #+#             */
/*   Updated: 2022/12/08 16:53:44 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stack[256];
int count = 0;

void push(int x) {
    if (count == 256) {
        fprintf(stderr, "There's no space in the stack\n");
        return;
    }
    stack[count] = x;
    count++;
    // stack[count++] = x;
}

int pop() {
    if (count == 0) {
        fprintf(stderr, "Nothing to take from stack\n");
        return -1;
    }
    count--;
    int res = stack[count];
    return res;
    // return stack[count-- - 1];
}

int main(int argc, char* argv[]) {
    push(1);
    push(2);
    push(3);
    push(5);

    int i;
    for (i = 0; i <= 3; i++) {
        printf("%d ", pop());
    }

    return 0;
}