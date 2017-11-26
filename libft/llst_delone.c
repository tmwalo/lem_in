#include "libft.h"

void	llst_delone(t_llst **alst)
{
	if ((alst != NULL) && (*alst != NULL) )
	{
		if ((*alst)->value != NULL)
			free((*alst)->value);
		free(*alst);
		*alst = NULL;
	}
}
