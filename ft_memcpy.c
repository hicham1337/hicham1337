/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:25:49 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/11/07 11:19:57 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned const char	*sc;
	unsigned char		*dst;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	sc = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = 0;
	if (i < n)
	{
		while (sc[i] != '\0' && n != 0)
		{
			dst[i] = sc[i];
			i++;
			n--;
		}
		dst[i] = '\0';
	}
	return (dst);
}
