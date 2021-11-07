/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:21:43 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/11/07 11:12:36 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*j;
	int			k;
	int			m;

	k = 0;
	i = 0;
	m = ft_strlen(str);
	while (i <= m)
	{
		if (str[i] == c)
		{
			k = k + 1;
			j = &str[i];
		}
		i++;
	}
	if (k != 0)
		return ((char *)j);
	return (0);
}
