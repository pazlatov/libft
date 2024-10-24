/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 14:08:14 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/24 18:43:02 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_words(char **strings, size_t word)
{
	size_t	i;

	i = 0;
	while (i < word)
	{
		free (strings[i]);
		i++;
	}
	free (strings);
}

static char	*next_word(const char *s, char c, size_t *let)
{
	size_t	start;
	size_t	word_len;

	while (s[*let] == c && s[*let] != '\0')
		(*let)++;
	start = *let;
	word_len = 0;
	while (s[*let] != '\0' && s[*let] != c)
	{
		(*let)++;
		word_len++;
	}
	return (ft_substr(s, start, word_len));
}

char	**ft_split(char const *s, char c)
{
	size_t	let;
	size_t	word;
	char	**strings;

	word = 0;
	let = 0;
	strings = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strings || !s)
		return (NULL);
	while (word < count_words(s, c))
	{
		strings[word] = next_word(s, c, &let);
		if (!strings[word])
		{
			free_words (strings, word);
			return (NULL);
		}
		if (strings[word][0] != '\0')
			word++;
	}
	strings[word] = NULL;
	return (strings);
}
