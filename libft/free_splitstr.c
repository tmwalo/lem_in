/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_splitstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:30:58 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:31:03 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_splitstr(char ***str_array)
{
	char	**pt_str;

	if (str_array != NULL)
	{
		pt_str = *str_array;
		while (*pt_str != '\0')
		{
			free(*pt_str);
			++pt_str;
		}
		free(*str_array);
		*str_array = NULL;
	}
}
