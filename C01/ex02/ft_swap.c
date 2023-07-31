/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:20:13 by hasanbasori       #+#    #+#             */
/*   Updated: 2023/07/31 15:22:15 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}


// #include <stdio.h>

// int		main(void)
// {
// 	int i  =7;
// 	int j  = 3;
// 	int *a = &i;
// 	int *b = &j;

// 	ft_swap(a, b);
// 	printf("i should be 7 and it is : %u\n",*a);
// 	printf("j should be 3 and it is : %u",*b);
// } 