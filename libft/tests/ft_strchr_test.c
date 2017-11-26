
#include "libft.h"

int	main(void)
{
	char	str[] = "To be my friend, just admit that I'm always right.";
	char	*seek;

	ft_putstr("str1: ");
	ft_putendl(str);
	ft_putstr("call ft_strchr(str1, 'a'): ");
	seek = ft_strchr(str, 'a');
	ft_putendl(seek);
	return (0);
}
