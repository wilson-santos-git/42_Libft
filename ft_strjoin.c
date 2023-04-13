/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:44:37 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/13 19:03:43 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	p = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
	if (p == NULL)
		return (p);
	while (s2[j] != '\0')
	{
		while (s1[j] != '\0')
		{
			p[i] = s2[j];
			j++;
			i++;
		}
		p[i] = s2[i + j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
