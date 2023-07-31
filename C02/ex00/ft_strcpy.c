/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasanbasorisamang <hasanbasorisamang@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:41:02 by hasanbasori       #+#    #+#             */
/*   Updated: 2023/07/30 13:45:56 by hasanbasori      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int index;

    index = 0;
    while (src[index] != '\0')
    {
        dest[index ] = src[index];
        index++;
    }
    dest [index] ='\0';
    return(dest);
}

/* int main()
{
    char arr[] = "test";
    char arr2[] = "ok";

    ft_strcpy(arr, arr2);
    printf("%s", arr);
} */
