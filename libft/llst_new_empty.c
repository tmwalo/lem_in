#include "libft.h"

t_llst	*llst_new_empty(void)
{
	t_llst	*pt_lst;

	pt_lst = (t_llst *)malloc(sizeof(t_llst));
	if (pt_lst != NULL)
		pt_lst->next = NULL;
	return (pt_lst);
}
