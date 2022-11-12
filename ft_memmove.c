/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:30:27 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 15:30:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char    *temp;

    i = 0;
    *temp = (unsigned char *)src;
    if (!dest || !src)
        return (NULL);
    if (ft_strlen(dest) > ft_strlen(src))
    {
        while (i < n)
        {
            (unsigned char *)dest = (unsigned char *)temp;
            i++;
        }
        return (*dest);
    }
    else
        return (0);
}

int main (int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    printf("%s", ft_memmove("elioli", "maxime", 4));
}