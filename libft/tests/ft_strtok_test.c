#include "libft.h"

int	main(void)
{
	char	**tok_strs;
	char	str[] = "  add		      r7, r3 , 	  	r4 ";

	tok_strs = ft_strtok(str);
	while (*tok_strs)
	{
		ft_putendl(*tok_strs);
		++tok_strs;
	}
	return (0);
}
