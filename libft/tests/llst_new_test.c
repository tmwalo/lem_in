#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*pt_lst;
	char	*str;

	str = ft_strdup("2 peas in a pod");
	pt_lst = llst_new(str, sizeof(*str) * (ft_strlen(str) + 1) );
	if (pt_lst)
		printf("Pass: node value = %s\n", (char *)pt_lst->value);
	else
		printf("Fail");
	if (str)
		free(str);
	if (pt_lst)
		llst_delone(&pt_lst);
	return (0);
}
