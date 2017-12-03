#include "libft.h"

void	*find_prev_cmd_target(t_llst *begin, void *value)
{
	t_llst 		*current_node;
	t_llst 		*prev_node;
	size_t		len;

	if ((begin == NULL) || (value == NULL))
		return (NULL);
	current_node = begin;
	prev_node = NULL;
	while (current_node != NULL)
	{
		if (current_node != begin)
		{
			len = ft_strlen(value);
			if ((ft_memcmp(value, current_node->value, sizeof(char) * len) == 0) && prev_node)
				return (prev_node->value);
			if (!ft_iscomment((char *)current_node->value))
				prev_node = current_node;
		}
		current_node = current_node->next;
	}
	return (NULL);
}
