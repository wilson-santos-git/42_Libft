/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:47:42 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/13 18:46:38 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sdst;
	size_t	srcl;
	size_t	i;
	size_t	j;

	sdst = ft_strlen(dst);
	srcl = ft_strlen((char *)src);
	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	if (size <= sdst || size == 0)
	{
		return (size + srcl);
	}
	while (src[j] != '\0' && j < size - sdst - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (sdst + srcl);
}
