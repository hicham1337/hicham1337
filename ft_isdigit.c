/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:42:19 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/11/02 09:18:21 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int arg)
{
	if (!(arg >= 48 && arg <= 57))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
