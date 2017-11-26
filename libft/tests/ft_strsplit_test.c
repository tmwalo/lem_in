#include "libft.h"

int	main(void)
{
	char	**splt_strs;
	char	str[] = "                         ";
	int	i;

	splt_strs = ft_strsplit(str, ' ');
	i = 0;
	while (*splt_strs)
	{
		ft_putendl(*splt_strs);
		++splt_strs;
		++i;
	}
	return (0);
}
