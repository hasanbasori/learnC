/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:28:02 by csorntha          #+#    #+#             */
/*   Updated: 2023/07/31 11:01:36 by hasanbasori      ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				d_len;
	unsigned int	i;

	d_len = ft_strlen(dest);
	i = 0;
	while (src[i] && d_len + i < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + i);
}

#include <stdio.h>
#include <string.h>

int	main()

{
	char		dest[20] = "Hello";
	char		*src = "Hasanbasori";
	unsigned int	result;

	result = ft_strlcat(dest, src, sizeof(dest));
	//result = strlcat(dest, src, dst_size);
	printf("Concatenated string: %s\n", dest);
	printf("Total length: %d\n", result);
	return (0);
}
