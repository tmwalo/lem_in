#include "libft.h"

t_sgraph	*prepare_sgraph(void)
{
	t_llst		*file;
	t_llst		*rev_file;
	t_sgraph	*sgraph;

	file = read_file(0);
	if (file == NULL)
		return (NULL);
	rev_file = llst_rev(file);
	if (rev_file == NULL)
		return (NULL);
	sgraph = sgraph_build(file, rev_file);
	llst_del(&rev_file);
	llst_del(&file);
	return (sgraph);
}
