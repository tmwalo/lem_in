#include "libft.h"
#include "stdio.h"

int	main(void)
{
	ft_putstr("call ft_isprint(newline char): ");
	printf("%d\n", ft_isprint('\n'));
	ft_putstr("call ft_isprint('D'): ");
	printf("%d\n", ft_isprint('D'));
	return (0);
}
