/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:08:40 by marvin            #+#    #+#             */
/*   Updated: 2022/11/16 15:08:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
        write(fd, &s[i], 1);
    write(fd, '\n', 1);
}