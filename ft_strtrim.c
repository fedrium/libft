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
	size_t end;

	end = ft_strlen(s1);
	if (set != 0 && s1 != 0)
	{
		while (*s1 != '\0' && ft_strchr(set, *s1))
			s1++;
		while (end != '\0' && ft_strchr(set, s1[end]))
			end--;
		return (ft_substr(s1, 0, end + 1));
	}
	return (0);
}