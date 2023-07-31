/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:22:19 by hasanbasori       #+#    #+#             */
/*   Updated: 2023/07/31 15:24:48 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;
}

// #include <stdio.h>


// int		main(void)
// {
// 	int a  = 20;
// 	int b  = 5;
// 	int *div = &a;
// 	int *mod = &b;

// 	ft_div_mod(a, b, div, mod);
	
// 	printf("Value of a is : %d",*div);
// 	printf("\nValue of b is : %d",*mod);
// }