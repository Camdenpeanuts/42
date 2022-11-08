/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckaddaou <ckaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:26:32 by ckaddaou          #+#    #+#             */
/*   Updated: 2022/11/08 17:57:56 by ckaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strnstr(const char *big, const char *little, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *) big);
	while (big[i])
	{
		while (big[i] == little[j])
		{
			i++;
			j++;
			if (!little[j])
				return ((char *) &big[i - len]);
			else
			{
				j = 0;
			}
			i++;
		}
	}
	return (0);
}

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    printf("%s", ft_strnstr("pliplup", "iplu", 4));
}