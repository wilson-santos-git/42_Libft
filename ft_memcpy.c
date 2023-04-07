/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:53:10 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/07 18:17:46 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *psrc;
	char *pdest;
	
	i = 0;
	psrc = (char *)src;
	pdest = (char *)dest;
	if(!dest || !src)
		return (NULL);
	while (i < n)
	{
		while (psrc[i] != '\0')
		{
			pdest[i] = psrc[i];
			i++;
		}
		pdest[i] = '\0';
		i++;
	}
	pdest[i] = '\0';
	return (pdest);
}
