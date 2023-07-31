/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 05:51:37 by hasanbasori       #+#    #+#             */
/*   Updated: 2023/07/31 05:54:51 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && 126 >= str[i])
        {
            i++;
        }
        else
        {
            return (0);
        }
	}
	return (1);
}

/*
#include <stdio.h>

int		main(void)
{
	char string[] = "Normal characters string";
	char *p_str;
	p_str = string;

	char unpr[] = "Unprintables: \t (tab), \a (?)";
	char *p_unp;
	p_unp = unpr;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = Contains only printable characters\n0 = Contains unprintable characters\n\n");
	printf("%s = %d\n", string, ft_str_is_printable(p_str));
	printf("%s = %d\n", unpr, ft_str_is_printable(p_unp));
	printf("Empty = %d\n-----\n", ft_str_is_printable(p_emp));

	return (0);
}
*/