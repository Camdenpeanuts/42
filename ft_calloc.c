/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:14:20 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 17:14:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t	i;

    i = 0;
	while (i < n)
	{
		*(char*)(s + i) = 0;
		i++;
	}
}

void    calloc(size_t nmemb, size_t size)
{
    if (nmemb == '/0' || size == '/0')
        return (NULL);
    else
    {
        void    *str;

        str = (void *)malloc(nmemb * size);
        ft_bzero(str, size);
        return (str);
    }
}