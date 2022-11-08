/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckaddaou <ckaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:26:19 by ckaddaou          #+#    #+#             */
/*   Updated: 2022/11/08 13:51:20 by ckaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int signe;
    int n;
    
    i = 0;
    signe = 1;
    n = 0;
    if (!str[i])
        return (0);
    while (str[i] == ' ' || str[i] >= 11 && str[i] <= 15)
        i++;
    if (str[i] == '-')
        signe = signe * - 1;
    i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    n = n * signe;
    return (n);
}