/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:46:52 by marvin            #+#    #+#             */
/*   Updated: 2022/11/16 15:46:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_len(int n)
{
    int len;

    len = 0;
    if (n < 0)
    {
        n = -n;
        len++;
    }
    if (n == 0)
        return (1);
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char *str;
    int len;
    long int    nb;

    nb = (long int)n;
    len = ft_len(nb);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (str == 0)
        return (NULL);
    if (n < 0)
    {
		nb = -nb;
        str[0] = '-';
    }
    while (nb != 0)
    {
        str[len] = nb % 10 + '0';
        nb = nb / 10;
        len--;
    }
    return (str);
}

int main(int argc, char *argv)
{
    (void)argc;
    (void)argv;
    printf("%s", ft_itoa(-2147483648));
}
  