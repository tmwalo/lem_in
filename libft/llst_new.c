#include "libft.h"

t_llst	*llst_new(void *value, size_t size)
{
	t_llst	*pt_lst;

	pt_lst = (t_llst *)malloc(sizeof(t_llst) );
	if (pt_lst != NULL)
	{
		pt_lst->value = malloc(size);
		if (pt_lst->value != NULL)
			ft_memmove(pt_lst->value, value, size);
		pt_lst->next = NULL;
	}
	return (pt_lst);
}
