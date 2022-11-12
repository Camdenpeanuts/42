/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:55:52 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 14:55:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_memcmp (const void *s1, const void *s2, size_t n)
{
    int i;
    
    i = 0;
    while (i < n)
    {
        if ((unsigned char *) s1 != (unsigned char *) s2)
            return ((unsigned char *) s2 - (unsigned char *) s1);
        i++;
    }
    return (0);
}

int main (int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    printf("%d", ft_memcmp("elio", "eliu", 4));
}