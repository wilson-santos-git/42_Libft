/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:29:14 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/23 21:56:50 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;
	t_list	*p;

	counter = 0;
	p = lst;
	if (!lst)
		return (NULL);
	while (p != NULL)
	{
		p = p.next;
		counter++;
	}
	return (counter);
}
