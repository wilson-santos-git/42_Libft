/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:31:10 by wteles-d          #+#    #+#             */
/*   Updated: 2023/04/13 14:32:48 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	total;
	int	n;

	i = 0;
	total = 0;
	n = 1;
	while (nptr && nptr[i] != '\0' && (ft_isspace(nptr[i])))
		i++;
	if (nptr && nptr[i] != '\0' && nptr[i] == '-')
	{
		n = -n;
		i++;
	}	
	while (nptr && nptr[i] != '\0' && (nptr[i] < 58 && nptr[i] > 47))
	{
		total = total * 10 + nptr[i] - '0';
		i++;
	}
	return (total * n);
}
