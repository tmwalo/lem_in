/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths_cross_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 13:13:56 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 14:44:03 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst			*file;
	t_sgraph		*pt_sgraph;
	t_pathfinder	*pt_map;
	int				start;
	int				end;
	int				ret;
	t_llst			*current_node;
	t_llst			*current_node_path;
	t_llst			*paths;

	file = read_file(0);
	pt_sgraph = sgraph_build(file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);

	start = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->start);
	end = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->end);
	all_paths(pt_map, start, end);
	current_node = pt_map->paths;
	while (current_node != NULL)
	{
		printf("path:");
		current_node_path = (t_llst *)current_node->value;
		while (current_node_path != NULL)
		{
			printf(" %s", (pt_map->pt_sgraph->keys)[*(int *)(current_node_path->value)]);
			current_node_path = current_node_path->next;
		}
		printf("\n");
		current_node = current_node->next;
	}

	paths = pt_map->paths;

	ret = paths_cross(NULL, paths, start, end);
	printf("%s\n", (!ret) ? "PASS" : "FAIL");

	ret = paths_cross(paths, NULL, start, end);
	printf("%s\n", (!ret) ? "PASS" : "FAIL");

	ret = paths_cross(paths, paths->next, -1, end);
	printf("%s\n", (!ret) ? "PASS" : "FAIL");

	ret = paths_cross(paths, paths->next, start, -1);
	printf("%s\n", (!ret) ? "PASS" : "FAIL");

	ret = paths_cross(paths->value, paths->next->value, start, end);
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = paths_cross(paths->value, paths->next->next->value, start, end);
	printf("%s\n", (!ret) ? "PASS" : "FAIL");

	sgraph_destroy(&pt_sgraph);
	llst_del(&file);
	return (0);
}
