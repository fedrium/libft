/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:33:25 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/05/09 11:40:56 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*a;

	i = 0;
	a = b;
	while (n > i)
	{
		a[i] = c;
		i++;
	}
	return (b);
}
