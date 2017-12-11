/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 13:30:04 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 11:39:37 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*read_file(int fd)
{
	char		*line;
	int			ret;
	t_llst		*begin_ll;
	t_llst		*new_node;
	int			len;

	line = NULL;
	begin_ll = NULL;
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		len = (int)ft_strlen(line);
		new_node = llst_new(line, sizeof(*line) * (len + 1));
		if (begin_ll == NULL)
			begin_ll = new_node;
		else
			llst_add(&begin_ll, new_node);
		ft_memdel((void **)&line);
	}
	ft_memdel((void **)&line);
	if (ret == (-1))
	{
		llst_del(&begin_ll);
		return (NULL);
	}
	return (begin_ll);
}
