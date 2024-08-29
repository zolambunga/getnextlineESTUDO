#include <fcntl.h>
#include "ft_printf.h"

int	main(int ac, char *av[])
{
	int	fd;
	char	buffer[5];
	fd = open(av[1], O_RDONLY);
	ft_printf("%d\n", fd);
	fd = read(fd, buffer, 5);
	ft_printf("%d\n", fd);
	ft_printf("\n\n%s\n", buffer);
	return (0);
}
