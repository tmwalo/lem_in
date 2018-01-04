#include "libft.h"

int	is_viable(t_llst *path, t_llst *unviable_paths)
{
	if (path == NULL)
		return (0);
	
	while (unviable_paths != NULL)
	{
		if (path == unviable_paths->value)
			return (0);
		unviable_paths = unviable_paths->next;
	}
	return (1);
}
