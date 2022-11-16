/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:08:35 by marvin            #+#    #+#             */
/*   Updated: 2022/11/16 15:08:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <unistd.h>

void    ft_putnbr(int n, int fd)
{
    if (n == -2147483648)
        write(fd, '-2147483648', 11);
    else if (n < 0)
        ft_putchar('-', fd);
    else if (n <= 9)
        ft_putchar__fd((n % 10) + 48);
    else
        ft_putnbr_fd(n / 10, fd);
}