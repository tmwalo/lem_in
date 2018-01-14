#include "libft.h"

int	cmd_chars(char *str)
{
	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	if ((str[0] == '#') && (str[1] == '#'))
		return (1);
	return (0);
}
