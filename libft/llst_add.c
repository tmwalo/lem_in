#include "libft.h"

void	llst_add(t_llst **alst, t_llst *new)
{
	if ((alst != NULL) && (new != NULL))
	{
		new->next = *alst;
		*alst = new;
	}
}
