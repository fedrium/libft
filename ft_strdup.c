/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:20:08 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/19 11:59:53 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	 int i;
	 int k;
	 char *str;

	i = ft_strlen((char *)s1);
	k = 0;
	str =  (char *)malloc (i + 1);
	while (s1[k] != '\0')
	{
		str[k] = s1[k];
		k++;
	}
	str[k] = '\0';
	return ((char *)&str[0]);
}