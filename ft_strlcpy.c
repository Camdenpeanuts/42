/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:46:07 by ckaddaou          #+#    #+#             */
/*   Updated: 2022/11/07 18:02:10 by ckaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strlcpy(char *dest, const char *src, int size)
{
	int	i;

	i = 0;
	while (dest[i] && src[i])
	{
		if (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	}
	if (i < size)
		dest[i] = '\0';
	return (size);
}
