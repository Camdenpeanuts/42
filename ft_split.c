/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:26:30 by marvin            #+#    #+#             */
/*   Updated: 2022/11/16 16:26:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

    int		ret_len(const char *s, char c)
    {
    	int		count;
	    int		flag;
	    int		i;

	    flag = 0;
	    count = 0;
    	i = 0;
    	while (s[i] != '\0')
    	{
       		if (flag == 1 && s[i] == c)
    			flag = 0;
    		if (flag == 0 && s[i] != c)
    		{
    			flag = 1;
    			count++;
    		}
    		i++;
    	}
    	return (count);
    }

    int		each_len(const char *s, char c)
    {
    	int		len;
    	int		i;  

    	len = 0;
    	i = 0;
    	while (s[i] != c && s[i] != '\0')
    	{
    		len++;
    		i++;
    	}
    	return (len);
    }

    char	**freeall(char **ret, int i)
    {
    	int		idx;    

	    idx = 0;
	    while (idx < i)
	    {
	    	free(ret[idx]);
	    	ret[idx] = NULL;
	    	idx++;
	    }
	    free(ret);
	    ret = NULL;
	    return (NULL);
    }

    char	**ft_split(char const *s, char c)
    {
    	char	**ret;
    	int		num;
    	int		i;
    	int		len;

	    i = 0;
	    len = 0;
	    if (!s)
	    	return (NULL);
	    num = ret_len((const char*)s, c);
	    if (!(ret = (char**)malloc(sizeof(char*) * (num + 1))))
	    	return (NULL);
	    while (num--)
	    {
	    	while (*s == c && *s != '\0')
		    	s++;
		    len = each_len((const char*)s, c);
		    if (!(ret[i++] = ft_substr((const char*)s, 0, len)))
		    	return (freeall(ret, i));
		    s += len;
    	}
    	ret[i] = NULL;
    	return (ret);
    }