/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:25:48 by csorntha          #+#    #+#             */
/*   Updated: 2023/07/31 11:00:41 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size;
	unsigned int	i;

	size = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
#include<stdio.h>
int	main(void)
{
	char	src[] = "How are you ?";
	char	dest[30] = "Hello World! ";
	char	*msg;

	msg = ft_strncat(dest, src, 7);
	printf("%s\n", msg);
}
