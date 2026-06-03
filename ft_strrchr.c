/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgda-si <edgda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:42:57 by edgda-si          #+#    #+#             */
/*   Updated: 2026/05/29 17:23:51 by edgda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*i;

	i = s;
	while (*s != '\0')
	{
		s++;
	}
	while (s >= i)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s--;
	}
	return (NULL);
}
