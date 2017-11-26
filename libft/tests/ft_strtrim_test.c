#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[] = "  Nothing in the world can take the place of perseverance,   ";
	char	empty_str[] = "";
	printf("%s\n", str);
	printf("%s\n", ft_strtrim(str));
	printf("%s\n", empty_str);
	printf("%s\n", ft_strtrim(empty_str));
	return (0);
}
