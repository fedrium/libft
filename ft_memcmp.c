/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:28:29 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/08 14:44:22 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *j;
	char *k;

	i = 0;
	j = (char *)s1;
	k = (char *)s2;
	if (n == 0)
		return (0);
	while (n > i)
	{
		if (j[i] < k[i])
			return (1);
		else if (j[i] > k[i])
			return (-1);
		i++;
	}
	return (0);
}