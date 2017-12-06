#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*pt_lst;
	t_llst	*pt_begin;
	t_llst	*current_node;
	int	num1;
	int	num2;
	int	num3;

	num1 = 187;
	num2 = 777;
	num3 = 139854;

	pt_lst = llst_new(&num1, sizeof(int) );
	pt_begin = pt_lst;

	pt_lst = llst_new(&num2, sizeof(int) );
	llst_add(&pt_begin, pt_lst);

	pt_lst = llst_new(&num3, sizeof(int) );
	llst_add(&pt_begin, pt_lst);

	if (pt_lst)
	{
		current_node = pt_begin;
		printf("Node values:");
		while (current_node)
		{
			printf(" %d", *(int *)((current_node->value) ) );
			current_node = current_node->next;
		}
		printf(" -- Pass --\n");
	}
	else
		printf("Fail\n");
	
	llst_del(&pt_begin);

	return (0);
}
