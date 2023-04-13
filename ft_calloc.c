/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:21:49 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/13 17:51:36 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	int		x;
	int		y;

	x = nmemb * size;
	y = x / size;
	if (y != (int)nmemb)
		return (NULL);
	p = (int *)malloc(nmemb * size);
	if (p == NULL)
		return (p);
	ft_bzero(p, nmemb);
	return (p);
}
