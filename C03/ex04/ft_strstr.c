/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:26:52 by csorntha          #+#    #+#             */
/*   Updated: 2023/07/31 11:00:51 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		f;
	char	*s;
	char	*t;

	f = 0;
	s = str;
	t = to_find;
	while (*s && *t != '\0')
	{
		if (*s == *t)
		{
			f++;
			t++;
		}
		else if (f > 0)
		{
			t -= f;
			f -= f;
		}
		s++;
	}
	if (*t == '\0')
		return (s -= f);
	return (0);
}

#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	str[] = "Hello world, work done";
	char	to_find[] = " ";
	char	*msg;

	msg = ft_strstr(str, to_find);
	//msg = strstr(str, to_find);
	printf("%s\n", msg);
}
