#include "libft.h"

int	ft_not_empty(char *str)
{
	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	else
		return (NEMPTY);
}
