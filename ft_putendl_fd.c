#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int	i;
	char l;

	i = 0;
	l = '\n';
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &l, 1);
}