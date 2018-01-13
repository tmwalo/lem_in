#include "libft.h"

int	ft_isnum_ants(char *str)
{
	char	**tokens;
	int		ntokens;
	int		error;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	tokens = ft_strtok(str);
	error = 0;
	ntokens = 0;
	while ((*tokens != '\0') && (ntokens <= 2) && !error)
	{
		++ntokens;
		if ((ntokens == 1) && !ft_isnum(*tokens))
			error = 1;
		if ((ntokens == 2) && !ft_iscomment(*tokens))
			error = 1;
		++tokens;
	}
	tokens = tokens - ntokens;
	free_splitstr(&tokens);
	return ((error) ? 0 : NUM_ANTS);
}
