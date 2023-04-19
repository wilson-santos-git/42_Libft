/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:01:16 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/19 17:28:05 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;
	size_t	slen;

	i = start;
	j = 0;
	slen = ft_strlen(s);
	if (!s || !len || start >= slen)
		return (ft_strdup(""));
	if (slen >= len)
		p = (char *)ft_calloc((len + 1), 1);
	else
		p = (char *)ft_calloc(((slen - i) + 1), 1);
	if (p == NULL)
		return (p);
	while (j < len && s[j] != '\0')
	{
		p[j] = s[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
