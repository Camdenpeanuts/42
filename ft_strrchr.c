/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckaddaou <ckaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:55:39 by ckaddaou          #+#    #+#             */
/*   Updated: 2022/11/08 17:34:28 by ckaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
    while (str[i])
    {
        i++;
    }
	while (str[i] >= 0)
	{
	    if (str[i] == c)
		    return ((char *) &str[i]);
	    else
		    i--;
	}
	return ((char *)&str[i]);
}