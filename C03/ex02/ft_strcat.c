/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:24:44 by csorntha          #+#    #+#             */
/*   Updated: 2023/07/31 11:00:36 by hasanbasori      ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	dest[10] = "";
	char	src1[] = "Hello";
	char	src2[] = "How t are you ?";
	
	ft_strcat(dest, src1);
	ft_strcat(dest, ", ");
	ft_strcat(dest, src2);
	printf("%s\n", dest);
}
