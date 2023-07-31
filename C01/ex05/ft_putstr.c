/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:33:40 by hasanbasori       #+#    #+#             */
/*   Updated: 2023/07/31 15:29:29 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
        int     i;
        i = 0;
        while (str[i] != '\0')
        {
            write(1, &(str[i]), 1);
            i++;
        }
}



// int		main(void)
// {
// 	char str[] = "Hello, world!";
// 	char *p_str;

// 	p_str = str;
// 	ft_putstr(p_str);
// }