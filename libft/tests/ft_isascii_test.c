#include "libft.h"
#include "stdio.h"

int	main(void)
{
	ft_putstr("call ft_isascii(tabspace): ");
	printf("%d\n", ft_isascii('\t'));
	ft_putstr("call ft_isascii(130): ");
	printf("%d\n", ft_isascii(130));
	return (0);
}
