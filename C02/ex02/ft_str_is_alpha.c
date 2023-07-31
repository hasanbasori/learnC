/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:53:53 by hasanbasori       #+#    #+#             */
/*   Updated: 2023/07/30 14:05:00 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (('a' <= *str && 'z' >= *str) || ('A' <= *str && 'Z' >= *str) )
			{
                str++;
            }
        else
        {
            return(0);
        }
	}
	return (1);
}

/* 
#include <stdio.h>


int		main(void)
{
	char    arr[] = "ab3cABC12";
    printf("%d", ft_str_is_alpha(arr));
} */