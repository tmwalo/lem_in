#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*pt_lst;
	t_llst	*new_node;
	t_llst	*pt_begin;
	t_llst	*pt_begin_copy_ll;

	int	num1;
	int	num2;
	int	num3;

	num1 = 187;
	num2 = 777;
	num3 = 139854;

	pt_lst = llst_new(&num1, sizeof(int) );
	pt_begin = pt_lst;
	pt_begin_copy_ll = NULL;
	new_node = llst_new_empty();
	new_node->value = pt_lst;
	new_node->next = NULL;
	llst_add(&pt_begin_copy_ll, new_node);

	pt_lst = llst_new(&num2, sizeof(int) );
	llst_add(&pt_begin, pt_lst);
	new_node = llst_new_empty();
	new_node->value = pt_lst;
	new_node->next = NULL;
	llst_add(&pt_begin_copy_ll, new_node);

	pt_lst = llst_new(&num3, sizeof(int) );
	llst_add(&pt_begin, pt_lst);
	new_node = llst_new_empty();
	new_node->value = pt_lst;
	new_node->next = NULL;
	llst_add(&pt_begin_copy_ll, new_node);

	llst_del_nodes(&pt_begin_copy_ll);
	llst_del(&pt_begin);

	return (0);
}
