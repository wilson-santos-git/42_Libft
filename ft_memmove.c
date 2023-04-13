/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:32:15 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/13 14:33:30 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*psrc;
	char	*pdest;

	i = 0;
	psrc = (char *)src;
	pdest = (char *)dest;
	if (!dest || !src)
		return (NULL);
	while (psrc[i] && pdest[i])
	{
		pdest[i] = psrc[i];
		i++;
	}
	while (i < n && pdest[i])
	{
		pdest[i] = '\0';
		i++;
	}
	pdest[i] = '\0';
	return (dest);
}
