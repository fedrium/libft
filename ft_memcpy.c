/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:01:37 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/08 10:15:44 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *j;
	char *l;

	i = 0;
	j = (char *)dst;
	l = (char *)src;
	while (n > i)
	{
		j[i] = l[i];
		i++;
	}
}