#include "libft.h"

void	st_put(t_llst **begin, char *key, int value)
{
	t_st_node	*pt_st_node;
	t_llst		*new_node;
	int		len;

	if ((begin == NULL) || (key == NULL) || (value <= 0))
		return ;
	len = (int)ft_strlen(key);
	pt_st_node = st_node_new(key, len * sizeof(char), &value, sizeof(int));
	if (pt_st_node == NULL)
		return ;
	new_node = llst_new(pt_st_node, sizeof(t_st_node));
	if (new_node == NULL)
		return ;
	llst_add(begin, new_node);
}
