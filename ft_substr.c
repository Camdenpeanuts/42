/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:55:45 by marvin            #+#    #+#             */
/*   Updated: 2022/11/13 13:55:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *s1;
    int i;
    int j;

    i = 0;
    j = 0;
    s1 = (char *)malloc(sizeof(*s) * (len + 1));
    if (!s1)
        return (NULL);
    while (s[i])
    {
        if (i >= start && j < len)
        {
            s1[j] = s[i];
            j++;
        }
        i++;
    }
    s1[j] = '\0';
    return (s1);
}