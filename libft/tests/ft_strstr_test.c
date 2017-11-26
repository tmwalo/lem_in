#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[] = "You're slow, even when you are falling.";

	ft_putstr("str: ");
	ft_putendl(str);
	ft_putstr("call ft_strstr(str, \"even\"): ");
	ft_putendl(ft_strstr(str, "even"));
	ft_putstr("call ft_strstr(str, \"snap\"): ");
	printf("%s\n", ft_strstr(str, "snap"));
	return (0);
}
