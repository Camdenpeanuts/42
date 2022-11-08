/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:28:55 by ckaddaou          #+#    #+#             */
/*   Updated: 2022/11/08 10:47:37 by ckaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_strlcat(char *dest, const char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(*src) > size - 1)
		return (NULL);
	else
	{
		while (dest[j])
			j++;
		while (src[i])
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	return (ft_strlen(*dest) + ft_strlen(*src));
}
