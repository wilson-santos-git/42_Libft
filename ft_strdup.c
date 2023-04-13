/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:59:53 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/13 17:57:22 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		len;

	if (s != NULL)
	{
		len = ft_strlen(s);
		p = (char *)ft_calloc(len + 1, 1);
		if (p == NULL)
			return (p);
		ft_memcpy(p, s, len);
		return (p);
	}
	return (NULL);
}
