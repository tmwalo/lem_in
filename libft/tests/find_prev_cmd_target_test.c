#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*pt_lst;
	t_llst	*pt_begin;
	t_llst	*current_node;

	char	*str1;
	char	*str2;
	char	*str3;
	char	*prev_value;

	size_t	len;

	str1 = "##start";
	str2 = "room7765 345 2345";
	str3 = "room23-room986";

	len = ft_strlen(str1);
	pt_lst = llst_new(str1, sizeof(char) * len);
	pt_begin = pt_lst;

	len = ft_strlen(str2);
	pt_lst = llst_new(str2, sizeof(char) * len);
	llst_add(&pt_begin, pt_lst);

	len = ft_strlen(str3);
	pt_lst = llst_new(str3, sizeof(char) * len);
	llst_add(&pt_begin, pt_lst);

	if (pt_lst)
	{
		current_node = pt_begin;
		printf("Node values:");
		while (current_node)
		{
			printf(" %s", (char *)((current_node->value) ) );
			current_node = current_node->next;
		}
	}

	prev_value = find_prev_cmd_target(pt_begin, "##start");
	printf("\nprev_value: %s\n", (char *)prev_value);

	return (0);
}
