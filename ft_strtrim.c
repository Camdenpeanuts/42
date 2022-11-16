/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:13:10 by marvin            #+#    #+#             */
/*   Updated: 2022/11/13 14:13:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_char_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    char    *s2;

    i = 0;
    while (s1[i] && ft_char_in_set(s1[i], set))
        i++;
    start = i;
    while (str[i])
        i++;
    while (i > start && ft_char_in_set(s1[i], set))
    {
        i--;
    }
    end = i;
    s2 = (char *)malloc(sizeof(char) * end - start + 1);
    if (!s2)
        return (NULL);
    i = 0;
    while (s[start + i] < end - start)
    {
        s2[i] = s[start + i];
        i++;
    }
    s2 = '\0';
    return (s2);
}