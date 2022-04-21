/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyu-xian <cyu-xian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:05:34 by cyu-xian          #+#    #+#             */
/*   Updated: 2022/04/08 12:50:04 by cyu-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int nbr;
	int neg;
	int j;
	
	i = 0;
	nbr = 0;
	neg = 0;
	j = 0;
	while (str[i] >= 1 && str[i] <= 32)
		i++;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
		j++;
	}
	if (j > 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (neg % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

// int main ()
// {
// 	printf("%d", ft_atoi("   	\n\t\r1"));
// 	printf("\n");
// 	printf("%d", atoi("  	\n\t\r1"));
// 	return (0);
// }
