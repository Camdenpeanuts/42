/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckaddaou <ckaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:14:31 by ckaddaou          #+#    #+#             */
/*   Updated: 2022/11/08 17:25:01 by ckaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < n - 1)
	{
		i++;
	}
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}