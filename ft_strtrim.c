/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:26:40 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/21 15:38:00 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t beg;
	size_t end;
	size_t ctr;

	end = ft_strlen(s1);
	beg = 0;
	ctr = 0;
	if (set != 0 && s1 != 0)
	{
		while (s1[beg] == ' ' || ft_strchr(s1, (unsigned int)set))
			beg++;
		while (s1[end] == ' ' || ft_strchr(s1, (unsigned int)set))
			end--;
		while (end > beg && s1[beg] != '\0')
		{
			return (ft_substr(s1, 0, ft_strlen(s1) + 1));
		}
	}
	return (0);
}