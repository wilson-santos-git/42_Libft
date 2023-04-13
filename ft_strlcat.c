/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:47:42 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/13 14:30:17 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static	int	my_stringl(const char	*len)
{
	int	l;

	l = 0;
	while (len[l] != '\0')
		l++;
	return (l);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sdst;
	size_t	srcl;
	size_t	i;
	size_t	j;

	sdst = my_stringl(dst);
	srcl = my_stringl((char *)src);
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
