/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isedge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:03:17 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 17:46:02 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isedge(char *str)
{
	char	**words;
	char	**first_word_array;
	int		num_words;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	words = ft_strsplit(str, ' ');
	if (!(*words))
		return (0);
	if ((!ft_iscomment(words[1])) && (words[1] != '\0'))
		return (0);
	first_word_array = ft_strsplit(*words, '-');
	if (!(*first_word_array))
		return (0);
	num_words = 0;
	while (*first_word_array != '\0')
	{
		if ((num_words < 2) && (ft_isnum(*first_word_array) == 0))
			return (0);
		if ((num_words == 2) && (ft_iscomment(*first_word_array) == 0))
			return (0);
		if (num_words == 2)
			break ;
		++num_words;
		++first_word_array;
	}
	if (num_words < 2)
		return (0);
	else
		return (1);
}
