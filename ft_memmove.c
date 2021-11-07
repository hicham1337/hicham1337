/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:34:52 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/11/07 11:19:07 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*sc;

	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	i = 0;
	if (dst == NULL && sc == NULL)
		return (NULL);
	if (sc < dst)
		while (++i <= len)
			dst[len - i] = sc[len - i];
	else
		while (len-- > 0)
			*(dst++) = *(sc++);
	return (dst);
}
