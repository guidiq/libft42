/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:36:35 by cshannon          #+#    #+#             */
/*   Updated: 2021/11/02 13:22:51 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_counter(char const *s, char c)

{
	size_t	word;
	size_t	count;

	word = 0;
	count = 0;
	while (s[word])
	{
		while (s[word] && s[word] == c)
			word++;
		if (s[word] && s[word] != c)
		{
			while (s[word] && s[word] != c)
				word++;
			count++;
		}
	}
	return (count);
}

static char	**free_words(int x, char **p)
{
	while (x >= 0)
		free (p[--x]);
	free (*p);
	return (NULL);
}

static char	**words_maker(char **words, char const *s, char c, size_t count)
{
	int		x;
	size_t	y;
	int		z;

	x = 0;
	y = 0;
	z = 0;
	while (y < count)
	{
		while (s[x] && s[x] == c)
			x++;
		if (s[x] && s[x] != c)
			z = x;
		while (s[x] && s[x] != c)
			x++;
		words[y] = ft_substr(s, z, (x - z));
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
