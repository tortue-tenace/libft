/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tattal <tattal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:55:21 by tattal            #+#    #+#             */
/*   Updated: 2026/04/23 17:01:47 by tattal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			words++;
		s++;
	}
	return (words);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_free(char **tab, size_t i)
{
	while (i--)
		free(tab[i]);
	free(tab);
	return (NULL);
}

static int	fill_word(char **tab, size_t i, char const *s, size_t len)
{
	size_t	j;

	tab[i] = malloc(sizeof(char) * (len + 1));
	if (!tab[i])
		return (0);
	j = 0;
	while (j < len)
	{
		tab[i][j] = s[j];
		j++;
	}
	tab[i][len] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_word_len(s, c);
		if (!fill_word(result, i, s, len))
			return (ft_free(result, i));
		s += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}


#include <stdio.h>
int	main(void)
{
	char	**r;
	int		i;

	r = ft_split("  hello   world  42  ", ' ');
	i = 0;
	while (r[i])
		printf("[%s]\n", r[i++]);
	while (i--)
		free(r[i]);
	free(r);
	return (0);
}
