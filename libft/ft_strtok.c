/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 11:41:29 by tmwalo            #+#    #+#             */
/*   Updated: 2017/09/26 11:46:01 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_delim(char c)
{
	char	*delim_str;
	char	*delim_str_copy;
	int		result;

	delim_str = ft_strdup(" \t");
	delim_str_copy = delim_str;
	result = 0;
	while (*delim_str_copy != '\0')
	{
		if (c == *delim_str_copy)
		{
			result = 1;
			break ;
		}
		++delim_str_copy;
	}
	free(delim_str);
	return (result);
}

static int		ft_only_delim(char const *s)
{
	int		only_delim;

	only_delim = 1;
	while (*s != '\0')
	{
		if (!ft_is_delim(*s))
			only_delim = 0;
		++s;
	}
	return (only_delim);
}

static int		words(char const *s)
{
	int		words;
	int		in_word;

	words = 0;
	in_word = 0;
	if (s != NULL)
	{
		while (*s != '\0')
		{
			if (!ft_is_delim(*s))
			{
				if (in_word == 0)
				{
					in_word = 1;
					++words;
				}
			}
			else if (in_word == 1)
				in_word = 0;
			++s;
		}
	}
	return (words);
}

static size_t	ft_word_len(char const *str)
{
	int		len;

	len = 0;
	while ((*str != '\0') && (!ft_is_delim(*str)))
	{
		++len;
		++str;
	}
	return ((size_t)len);
}

char			**ft_strtok(char const *s)
{
	char			**substr_array;
	int				switch_to_word;
	char const		*og_s;

	substr_array = (char **)ft_memalloc(sizeof(char *) * (words(s) + 1));
	if ((!s) || (!substr_array) || (ft_strlen(s) == 0) || ft_only_delim(s))
		return (substr_array);
	switch_to_word = 0;
	og_s = s;
	while (*s != '\0')
	{
		if ((!ft_is_delim(*s)) && (switch_to_word == 0))
		{
			switch_to_word = 1;
			*substr_array = ft_strsub(og_s, (s - og_s), ft_word_len(s));
			if (*substr_array == NULL)
				return (NULL);
			++substr_array;
		}
		else if (ft_is_delim(*s))
			switch_to_word = 0;
		++s;
	}
	return (substr_array - words(og_s));
}
