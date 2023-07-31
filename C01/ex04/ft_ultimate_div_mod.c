/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:27:31 by hasanbasori       #+#    #+#             */
/*   Updated: 2023/07/30 13:31:09 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = (*a) / (*b);
    *b = (*a) % (*b);
    *a = tmp;
}


#include <stdio.h>


/* int		main(void)
{
	int i = 10;
	int j = 5;
	int *a = &i;
	int *b = &j;

	printf("%d /",i);
	printf(" %d\n",j);

	ft_ultimate_div_mod(a, b);
	
	printf("div (*a) = %d\n",*a);
	printf("mod (*b) = %d",*b);

} */