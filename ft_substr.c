/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tattal <tattal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:01:20 by tattal            #+#    #+#             */
/*   Updated: 2026/04/23 12:36:46 by tattal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*r;

	r = ft_substr("Hello, World!", 7, 5);
	printf("[%s]\n", r);
	free(r);
	r = ft_substr("abc", 0, 42);
	printf("[%s]\n", r);
	free(r);
	r = ft_substr("abcdef", 50, 5);
	printf("[%s]\n", r);
	free(r);
	r = ft_substr("tripouille", 1, 1);
	printf("[%s]\n", r);
	free(r);
	return (0);
}
*/
