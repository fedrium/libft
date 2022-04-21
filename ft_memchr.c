/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:59:52 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/08 13:15:21 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *k;

	i = 0;
	k = (char *)s;
	if (n == 0)
		return 0;
	if (c > 256)
		c = c - 256;
	while (n > i)
	{
		if ((int)k[i] == c)
			return (&k[i]);
		else
			i++;
	}
	return (0);
}

// int main()
// {
// 	char array[] = {0, 1, 2 ,3 ,4 ,5};
// 	char	*res = ft_memchr(array, 300, 1);
// 	printf("%d", res == array);
// 	return 0;
// }