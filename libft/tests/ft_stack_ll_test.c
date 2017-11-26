#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_stack_ll		stack;
	t_stack_ll		*pt_stack;
	int				num1 = 47;
	int				num2 = 89339;
	int				num3 = 518;
	t_list			*pop_value;

	pt_stack = &stack;
	ft_stack_init_ll(pt_stack);
	ft_push_ll(pt_stack, &num1, sizeof(int));
	ft_push_ll(pt_stack, &num2, sizeof(int));
	ft_push_ll(pt_stack, &num3, sizeof(int));
	while (pt_stack->size > 0)
	{
		pop_value = ft_pop_ll(pt_stack);
		printf("%d\n", (*(int *)pop_value->content));
		printf("size: %lu\n", pt_stack->size);
		free(pop_value);
		if (!ft_stack_check_empty_ll(pt_stack))
			printf("stack is not empty\n");
		else
			printf("stack is empty\n");
	}
	return (0);
}
