/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:21:49 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/19 19:17:08 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}

// #include <string.h>

// int main(void)
// {
// 	size_t	size = 8539;
//  	void	*d1 = ft_calloc(size, sizeof(int));
//  	void	*d2 = calloc(size, sizeof(int));

// 	if (memcmp(d1, d2, size * sizeof(int)))
//  		printf("FAILED\n");
// 	else 
// 		printf("PASSED\n");
//  	free(d1);
//  	free(d2);
//  	return (0);
// }