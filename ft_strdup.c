/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:11:33 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 17:11:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *strdup(const char *s)
{
    char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(*s) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}