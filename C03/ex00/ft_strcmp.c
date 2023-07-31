/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:00:11 by hasanbasori       #+#    #+#             */
/*   Updated: 2023/07/31 11:00:17 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	s1[] = "Hello Good Morning!";
	char	s2[] = "Hello Good Morning!";
	int	result;

	result = ft_strcmp(s1,s2);
	if (result == 0)
		printf("s1 and s2 are equal\n");
	if (result < 0)
		printf("s1 is less than s2 (%d)\n", result);
	if (result > 0)
		printf("s1 is greater than s2 (%d)\n", result);
}
