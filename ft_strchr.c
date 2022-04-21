/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:13:35 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/14 10:08:39 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	 *ft_strchr(const char *s, int c)
{
	int i;
	int j;

	i	= 0;
	j 	= ft_strlen((char *)s);
	if (c == 0)
		return ((char *)&s[j]);
	if (c > 256)
		c = c - 256;
	while (j >= i)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}