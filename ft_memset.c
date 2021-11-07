/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:51:04 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/11/02 09:57:38 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n )
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)str;
	while (i < n)
	{
		src[i] = c;
		i++;
	}
	return (src);
}
