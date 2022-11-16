/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:11:46 by marvin            #+#    #+#             */
/*   Updated: 2022/11/16 15:11:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;

    i = 0;
    if (!s || !f)
        return (NULL);

    s1 = malloc(sizeof(char) * ft_strlen(s));
    if (!s1)
        return (NULL);
    while (s[i])
    {
        s1[i] = f(i, s[i]);
        i++;
    }
    s1[i] = '\0';
    return (s1);
}