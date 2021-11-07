/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:26:28 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/11/01 18:48:42 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		return (ch);
	}
	else if (ch >= 97 && ch <= 122)
	{
		return (ch - 32);
	}
	else
	{
		return (ch);
	}
}
