/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:35:26 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/23 20:36:00 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	if (!lst)
		return (NULL);
	while (p.next != NULL)
		p = p.next;
	return (p);
}
