#include "libft.h"

int	main(void)
{
	char	**splt_strs;
	char	split[] = "-split----this---string--";
	char	**tok_strs;
	char	tokenize[] = "  add		      r7, r3 , 	  	r4 ";

	splt_strs = ft_strsplit(split, '-');
	tok_strs = ft_strtok(tokenize);
	free_splitstr(&splt_strs);
	free_splitstr(&tok_strs);
	ft_putendl("Check Valgrind output");
	return (0);
}
