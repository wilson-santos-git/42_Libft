/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:20:17 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/13 14:33:08 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ps1;
	char	*ps2;

	i = 0;
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	if (!s1 || !s2)
		return (0);
	while (ps1[i] == ps2[i] && i < n)
	{
		i++;
	}
	return (ps1[i] - ps2[i]);
}
