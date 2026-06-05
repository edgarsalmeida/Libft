/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgda-si <edgda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:29:49 by edgda-si          #+#    #+#             */
/*   Updated: 2026/06/05 15:56:58 by edgda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_no;

	new_no = (t_list *)malloc(sizeof(t_list));
	if (!new_no)
		return (NULL);
	new_no->content = content;
	new_no->next = NULL;
	return (new_no);
}
