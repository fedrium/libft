#include "libft.h"

char	*ft_itoa(int n)
{
	int num;
	int len;
	char *str;

	num = n;
	len = 0;
	if (n == 0)
		len = 1;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	str = (char *)malloc (sizeof(char) * (len + 1));
	while (num < len)
		str[len--] = n % 10 + '\0';
	str[num + 1] = '\0';
	return (str);
}