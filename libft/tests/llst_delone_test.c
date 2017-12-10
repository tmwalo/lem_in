#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*pt_lst;
	t_llst	*pt_begin;
	t_llst	*current_node;

	int	num1;

	num1 = 187;

	pt_lst = llst_new(&num1, sizeof(int) );
	pt_begin = pt_lst;

	current_node = pt_begin;
	printf("Node values:");
	while (current_node)
	{
		printf(" %d", *(int *)((current_node->value) ) );
		current_node = current_node->next;
	}
	printf("\n");

	llst_delone(&pt_begin);

	current_node = pt_begin;
	printf("Node values:");
	while (current_node)
	{
		printf(" %d", *(int *)((current_node->value) ) );
		current_node = current_node->next;
	}
	printf("\n");
	printf("%s\n", (pt_begin == NULL) ? "PASS" : "FAIL");

	return (0);
}
