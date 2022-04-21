/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:23:15 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/15 15:55:28 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	src_iter;
	size_t	dst_iter;
	int	cat_count;

	dstlen = ft_strlen(dst);
	src_iter = 0;
	dst_iter = dstlen;
	cat_count = dstsize - dstlen - 1;

	//check cat count
	if (dstsize > __INT_MAX__) cat_count = 2147483647;
	if (dstsize == 0)
	{
		return ft_strlen(src);
	}
	if (dstlen > dstsize) return ft_strlen(src) + dstsize;
	if (cat_count < 1)
	{
		return ft_strlen(src) + dstlen;
	}
	while(src_iter < cat_count && src[src_iter]){
		dst[dst_iter++] = src[src_iter++];
	}
	dst[dst_iter] = 0;
	return dstlen + ft_strlen(src);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	char	*dst;
// 	char	*dst2;
// 	char	*src = "AAAAAAAAA";
// 	int		my_ret;
// 	int		def_ret;

// 	dst = malloc(1234);
// 	dst2 = malloc(1234);
// 	memset(dst, 0, 1234);
// 	memset(dst2, 0, 1234);
// 	// dst[0] = 's';
// 	// dst2[0] = 's';
// 	// dst[1] = 0;
// 	// dst2[1] = 0;
// 	memset(dst, 'C', 5);
// 	memset(dst2, 'C', 5);
// 	my_ret = ft_strlcat(dst, src, -1);
// 	def_ret = strlcat(dst2, src, -1);
// 	printf("my_ret %d\n", my_ret);
// 	printf("def_ret %d\n", def_ret);
// 	printf("dst %s\n", dst);
// 	printf("dst2 %s\n", dst2);
// }