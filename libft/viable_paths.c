#include "libft.h"

int	viable_paths(t_llst *paths, int start, int end)
{
	t_llst	*pt_unviable_paths;
	t_llst	*copy_unviable_paths;
	int	unviable;

	if ((paths == NULL) || (start < 0) || (end < 0))
		return (0);
	pt_unviable_paths = unviable_paths(paths, start, end);
	if (pt_unviable_paths == NULL)
		return (1);
	copy_unviable_paths = pt_unviable_paths;
	while (paths != NULL)
	{
		unviable = 0;
		pt_unviable_paths = copy_unviable_paths;
		while (pt_unviable_paths != NULL)
		{
			if (paths->value == pt_unviable_paths->value)
				unviable = 1;
			pt_unviable_paths = pt_unviable_paths->next;
		}
		if (unviable)
			llst_del((t_llst **)&(paths->value));
		paths = paths->next;
	}
	return (1);
}
