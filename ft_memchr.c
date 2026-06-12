/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgda-si <edgda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:54:26 by edgda-si          #+#    #+#             */
/*   Updated: 2026/05/28 17:57:07 by edgda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		char_to_find;
	size_t				i;

	ptr = (const unsigned char *)s;
	char_to_find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == char_to_find)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
