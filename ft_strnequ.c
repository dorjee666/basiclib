/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 11:53:14 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/03 14:41:40 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (n && *s1)
	{
		if (*s2)
		{
			if (*s1 != *s2)
				return (0);
		}
		else
			return (0);
		n--;
		s1++;
		s2++;
	}
	if (*s2)
		return (0);
	return (1);
}
