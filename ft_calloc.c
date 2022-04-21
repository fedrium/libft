/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:41:52 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/15 17:18:08 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *dst;
	
	dst = (char *)malloc (count * size);
	if (count > 2147483647 || size > 2147483647)
		return (0);
	if (!count && !size)
		return (0);
	ft_bzero(dst, (count * size));
	return (dst);
}