/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:36:14 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/11 13:50:47 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n - 1 > i)
	{
		if (s1[i] != s2[i])
			break;
		else 
			i++;
	}
	if (s1[i] > s2[i])
		return (1);
	else if (s2[i] > s1[i])
		return (-1);
	return (0);
}