/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:54:30 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:44:51 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_delim(char c, char delim)
{
	if (c == delim)
		return (1);
	else
		return (0);
}

static int		ft_only_delim(char const *s, char delim)
{
	int		only_delim;

	only_delim = 1;
	while (*s != '\0')
	{
		if (!ft_is_delim(*s, delim))
			only_delim = 0;
		++s;
	}
	return (only_delim);
}

static int		words(char const *s, char c)
{
	int		words;
	int		in_word;

	words = 0;
	in_word = 0;
	if (s != NULL)
	{
		while (*s != '\0')
		{
			if (*s != c)
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

static size_t	ft_word_len(char const *str, char c)
{
	int		len;

	len = 0;
	while ((*str != '\0') && (*str != c))
	{
		++len;
		++str;
	}
	return ((size_t)len);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**substr_array;
	int				switch_to_word;
	char const		*og_s;

	substr_array = (char **)ft_memalloc(sizeof(char *) * (words(s, c) + 1));
	if ((!s) || (!substr_array) || (ft_strlen(s) == 0) || ft_only_delim(s, c))
		return (substr_array);
	switch_to_word = 0;
	og_s = s;
	while (*s != '\0')
	{
		if ((*s != c) && (switch_to_word == 0))
		{
			switch_to_word = 1;
			*substr_array = ft_strsub(og_s, (s - og_s), ft_word_len(s, c));
			if (*substr_array == NULL)
				return (NULL);
			++substr_array;
		}
		else if (*s == c)
			switch_to_word = 0;
		++s;
	}
	return (substr_array - words(og_s, c));
}
