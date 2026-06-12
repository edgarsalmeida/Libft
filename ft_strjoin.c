/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgda-si <edgda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:37:14 by edgda-si          #+#    #+#             */
/*   Updated: 2026/06/03 15:45:37 by edgda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	size_s1;
	size_t	size_s2;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	new_string = (char *)malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!new_string)
		return (NULL);
	ft_memcpy(new_string, s1, size_s1);
	ft_memcpy(new_string + size_s1, s2, size_s2);
	new_string[size_s1 + size_s2] = '\0';
	return (new_string);
}
