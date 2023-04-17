/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:20:21 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/17 17:08:44 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	is_to_remove(char const c, char const *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] == c)
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (is_to_remove(s1[i], set) && i < j)
		i++;
	if (i >= j)
		return (ft_strdup(s1 + i + 1));
	while (is_to_remove(s1[j], set))
		j--;
	p = (char *)ft_calloc(j - i + 1, 1);
	if (p == NULL)
		return (p);
	ft_strlcpy(p, s1 + i, j - i);
	return (p);
}
