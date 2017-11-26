#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[] = "You're slow, even when you are falling.";

	ft_putstr("str: ");
	ft_putendl(str);
	ft_putstr("call ft_strstr(str, \"even\", 25): ");
	ft_putendl(ft_strnstr(str, "even", 25));
	ft_putstr("call ft_strstr(str, \"even\", 10): ");
	printf("%s\n", ft_strnstr(str, "even", 10));
	return (0);
}
