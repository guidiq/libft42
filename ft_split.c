/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:36:35 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/28 16:08:11 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_words(int x, char **p)
{
	while (x >= 0)
		free (p[--x]);
	free (*p);
	return (NULL);
}

static int	words_counter(char const *s, char c)

{
	size_t	word;
	size_t	count;

	word = 0;
	count = 0;
	while (s[count])
	{
		while (s[count] && s[count] == c)
			count++;
		if (s[count] && s[count] != c)
		{
			while (s[count] && s[count] != c)
				count++;
			word++;
		}
	}
	return (word);
}

static char	**words_maker(char **words, char const *s, char c, size_t count)
{
	int		x;
	size_t	y;
	int		words_output;

	x = 0;
	y = 0;
	words_output = 0;
	while (y < count)
	{
		while (s[x] && s[x] == c)
			x++;
		if (s[x] && s[x] != c)
			words_output = x;
		while (s[x] && s[x] != c)
			x++;
		words[y] = ft_substr(s, words_output, (x - words_output));
		if (words[y] == NULL)
			return (free_words(y, words));
		y++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		count;

	if (!s)
		return (0);
	count = words_counter(s, c);
	words = (char **)malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (0);
	words = words_maker(words, s, c, count);
	words[count] = NULL;
	return (words);
}
