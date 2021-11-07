/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strmapi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:51:10 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/11/05 16:54:04 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*buffer;

	i = 0;
	buffer = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (buffer == NULL)
		return (NULL);
	while (str[i])
	{
		buffer[i] = f(i, str[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
