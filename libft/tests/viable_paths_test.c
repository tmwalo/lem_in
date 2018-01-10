/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viable_paths_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 13:11:28 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 13:12:03 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_llst		*rev_file;
	t_sgraph	*pt_sgraph;
	t_pathfinder	*pt_map;
	int		start;
	int		end;
	t_llst		*current_node;
	t_llst		*current_node_path;

	file = read_file(0);
	rev_file = llst_rev(file);
	pt_sgraph = sgraph_build(file, rev_file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);

	start = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->start);
	end = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->end);
	all_paths(pt_map, start, end);
	viable_paths(&(pt_map->paths), start, end);
	current_node = pt_map->paths;
	while (current_node != NULL)
	{
		printf("path:");
		current_node_path = (t_llst *)current_node->value;
		while (current_node_path != NULL)
		{
			if (current_node_path->value != NULL)
				printf(" %s", (pt_map->pt_sgraph->keys)[*(int *)(current_node_path->value)]);
			else
				printf("Deleted unviable path\n");
			current_node_path = current_node_path->next;
		}
		printf("\n");
		current_node = current_node->next;
	}

	pathfinder_destroy(&pt_map);
	llst_del(&rev_file);
	llst_del(&file);
	return (0);
}
