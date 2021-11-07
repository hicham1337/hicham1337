/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:54:31 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/11/07 11:07:57 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*buffer;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	buffer = malloc(sizeof(*s) * (len + 1));
	if (buffer == NULL)
		return (NULL);
	if (s == NULL || len < start)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			buffer[j++] = s[i];
		i++;
	}
	buffer[j] = '\0';
	return (buffer);
}
